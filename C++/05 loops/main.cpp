#include <iostream>
#include <windows.h> /*biblioteka windows dla m.in sleep */
#include <cstdlib> /*bibl dla czyszczeni */
using namespace std;

int main()
{
    for (int i=15; i>=0; i--)/*i++ inkrementacja zwi�kszanie o jeden*/
    {
        Sleep(1000); /*u�pienie przy kolejnym odliczaniu w ms */
        system("cls") /*polecenie czyszczenia ekranu */
        cout << i <<endl;
    }
    cout<<"JEBUT";
    return 0;
}
