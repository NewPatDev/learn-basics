#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Podaj wiek: ";
    cin >>wiek;

    if (wiek<18)
    {
        cout << "Nie jestes pelnoletni i nie mozesz kandydowac na prezydenta" ;
    }

    else if ((wiek>=18) && (wiek<35))
    {
        cout << "Jestes pelnoletni ale nie mozesz kandydowac na prezydenta";
    }

    else
    {
        cout << "Jestes pelnoletni i mozesz zostac prezydentem";
    }

    return 0;
}
