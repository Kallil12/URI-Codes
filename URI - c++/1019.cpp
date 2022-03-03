#include <iostream>

using namespace std;

int main () {

   int tempo;

   cin >> tempo;

   cout << tempo/3600 << ":";
   int tempo1 = tempo%3600;
   cout << tempo1/60 << ":";
   int tempo2 = tempo1%60;
   cout << tempo2%60 << endl;


return 0;
}
