#include <iostream>

using namespace std;

int main () {

   long int valor;
   cin >> valor;

   cout << valor << endl;
   cout << valor/100 << " nota(s) de R$ 100,00" << endl;
   int valor2 = valor%100;

   cout << valor2/50 << " nota(s) de R$ 50,00" << endl;
   int valor3 = valor2%50;

   cout << valor3/20 << " nota(s) de R$ 20,00" << endl;
   int valor4 = valor3%20;

   cout << valor4/10 << " nota(s) de R$ 10,00" << endl;
   int valor5 = valor4%10;

   cout << valor5/5 << " nota(s) de R$ 5,00" << endl;
   int valor6 = valor5%5;

   cout << valor6/2 << " nota(s) de R$ 2,00" << endl;
   int valor7 = valor6%2;

   cout << valor7/1 << " nota(s) de R$ 1,00" << endl;


return 0;
}
