/*
Даны строки S и S0. Проверить, содержится ли строка S0 в строке S.
Если содержится, то вывести TRUE, если не содержится, то вывести FALSE.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    system("chcp 1251");

    string str;
    cout << "Введите строку s:\n";
    getline(cin,str);

    string str0;
    cout << "Введите строку s0:\n";
    getline(cin, str0);

    if (str.find(str0, 0) != string::npos)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}