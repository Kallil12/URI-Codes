#include <iostream>
#include <iomanip>

using namespace std;

int main () {

   int valor_int;
   float valor;
   cin >> valor;

   valor_int = int(valor);


   cout << "NOTAS:" << endl;
   cout << valor_int/100 << " nota(s) de R$ 100.00" << endl;
   int valor2 = valor_int%100;

   cout << valor2/50 << " nota(s) de R$ 50.00" << endl;
   int valor3 = valor2%50;

   cout << valor3/20 << " nota(s) de R$ 20.00" << endl;
   int valor4 = valor3%20;

   cout << valor4/10 << " nota(s) de R$ 10.00" << endl;
   int valor5 = valor4%10;

   cout << valor5/5 << " nota(s) de R$ 5.00" << endl;
   int valor6 = valor5%5;

   cout << valor6/2 << " nota(s) de R$ 2.00" << endl;
   int valor7 = valor6%2;

   cout << "MOEDAS:" << endl;
   cout << valor7/1 << " moeda(s) de R$ 1.00" << endl;
   ///int valor8 = valor7%1;


   setprecision(2);
   float valor_moedas = valor - valor_int;


   int moedas = (valor_moedas*100);

   cout << moedas << endl;

   cout << moedas/50 << " moeda(s) de R$ 0.50" << endl;
   int moedas2 = moedas%50;

   cout << moedas2/25 << " moeda(s) de R$ 0.25" << endl;
   int moedas3 = moedas2%25;

   cout << moedas3/10 << " moeda(s) de R$ 0.10" << endl;
   int moedas4 = moedas3%10;

   cout << moedas4/5 << " moeda(s) de R$ 0.05" << endl;
   int moedas5 = moedas4%5;

   cout << moedas5/1 << " moeda(s) de R$ 0.01" << endl;







return 0;
}
