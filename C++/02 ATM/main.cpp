#include <iostream>

using namespace std;

string PIN; //string zapis w postaci s��w, poprawne interpretowanie 0//

int main()
{
    cout << "Witaj w naszym banku" << endl;
    cout << "Podaj numer PIN:";
    cin >> PIN;

    if(PIN=="1729") //!= oznacza "nie jest r�wny" == operator r�wna si� //
    {
        cout << "Poprawny PIN";
    }

    else
    {
        cout << "Niepoprawny PIN";
    }

    return 0;
}
