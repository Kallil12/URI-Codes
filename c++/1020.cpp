#include <iostream>

using namespace std;

int main () {

   int dias;

   cin >> dias;

   cout << dias/365 << " ano(s)" << endl;
   int meses = dias%365;
   cout << meses/30 << " mes(es)" << endl;
   int dias1 = meses%30;
   cout << dias1 << " dia(s)" << endl;



return 0;
}
