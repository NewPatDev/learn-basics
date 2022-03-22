#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie; int liczba;

int main()
{
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;

    for(int i=1; i<=liczba; i++ )
    {
        Sleep(1000);
        system("cls");
        cout <<i<< ". "<<imie<<endl;
    }

    return 0;
}
