#include <iostream>
#include <iomanip>

using namespace std;

int main () {

   const double pi = 3.14159;
   double raio;
   double area;

   ///setprecision(4);

   cin >> raio;

   area = pi * (raio*raio);
   cout.precision(4);
   cout << "A=" << fixed << area;



return 0;
}
