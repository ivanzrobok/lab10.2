// lab10.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Варіант 9.
// Дано текстовий файл t.
// Групи символів, відокремлені пробілами(одним або кількома) і які не містять
// пробілів, будемо називати словами.Знайти кількість слів, у яких перший і останній символ –
// однакові.


#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void createTXT(char* fname);

int searchWordfile(char* fname);
int main()
{
   

    char fname[50];
    cout << " Enter neme : ";
    cin >> fname;
    createTXT(fname);

    cout << endl << "the number of elements whose first and last letters are the same : ";
    cout<<searchWordfile(fname);
    cout << endl;
}
int searchWordfile(char* fname)
{
    ifstream fin(fname);
    string s;

    int k = 0;
    while (fin>>s) // поки можна прочитати слово
    {
        int j;
        j = s.length();
        if (s[0] == s[j-1]) {
            k++;
        }
    }
    //cout << k;
    return k;
    
}

void createTXT(char* fname)
{
    ofstream fout(fname);
    char ch;
    string s;
    do
    {
        cin.get();
        cin.sync();
        cout << "enter string : ";
        getline(cin, s);
        fout << s << endl;
        cout << "enter y or n  : ";
        cin >> ch;
    } while (ch=='y'|| ch=='Y' );
}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
