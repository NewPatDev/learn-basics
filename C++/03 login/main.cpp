#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout << "Podaj login: ";
    cin >> login;

    cout << "Podaj haslo: ";
    cin >> haslo;

    if(login=="admin") && /*and*/ (haslo=="szarlotka")
    {
        cout << "Zalogowano" ;
    }

    else
    {
        cout << "Niepoprawny login lub haslo";
    }
    return 0;
}
