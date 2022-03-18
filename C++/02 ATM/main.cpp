#include <iostream>

using namespace std;

string PIN; //string zapis w postaci s³ów, poprawne interpretowanie 0//

int main()
{
    cout << "Witaj w naszym banku" << endl;
    cout << "Podaj numer PIN:";
    cin >> PIN;

    if(PIN=="1729") //!= oznacza "nie jest równy" == operator równa siê //
    {
        cout << "Poprawny PIN";
    }

    else
    {
        cout << "Niepoprawny PIN";
    }

    return 0;
}
