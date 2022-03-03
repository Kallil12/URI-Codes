#include <iostream>

using namespace std;

int main () {

   int km;
   float litros;

   cin >> km >> litros;

   cout.precision(3);
   cout << fixed << km/litros << " km/l" << endl;


return 0;
}
