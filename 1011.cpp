#include <iostream>

using namespace std;

int main () {

   const double pi = 3.14159;
   double raio;


   cin >> raio;
   double vol = (4.0/3.0)*pi*(raio*raio*raio);

   cout.precision (3);
   cout << "VOLUME = " << fixed << vol << endl;

return 0;
}
