#include <iostream>

using namespace std;

int main () {

   int horas, velocidade;
   float consumo;

   cin >> horas >> velocidade;

   consumo = (horas*velocidade)/12.0;

   cout.precision(3);
   cout << fixed << consumo << endl;




return 0;
}
