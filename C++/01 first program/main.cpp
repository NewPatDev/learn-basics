#include <iostream>

using namespace std;

int uczniowie, cukierki,l_dla_ucznia,l_dla_jasia;

int main()
{
    cout << "Ile uczniow jest w Twojej klasie:";
    cin >> uczniowie;

    cout << "Ile jest kupionych cukierkow:";
    cin >> cukierki;

    l_dla_ucznia= cukierki/(uczniowie-1);
    l_dla_jasia=cukierki-(l_dla_ucznia*(uczniowie-1));

    cout << "Uczniowie dostana: " << l_dla_ucznia << endl;
    cout << "Dla Jasia zostanie: " << l_dla_jasia;
    return 0;
}
