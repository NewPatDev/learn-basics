#include <iostream>

using namespace std;

int populacja=1; int godzin=0;

int main()
{
       do /*najpierw wykonuje siê instrukcja a potem sprawdzany jest warunek */
   {
       godzin ++;
       populacja= populacja*2;
       cout << "minelo godzin: " << godzin ;
       cout << "  liczba bakterii: " <<populacja<<endl;
   } while(populacja<=1000000000);
}
