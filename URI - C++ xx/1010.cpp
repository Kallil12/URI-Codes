#include <iostream>

using namespace std;

int main () {

 int cod1, cod2, n1, n2;
 float price1, price2;

 cin >> cod1 >> n1 >> price1;
 cin >> cod2 >> n2 >> price2;

 cout.precision(2);
 cout << "VALOR A PAGAR: R$ "<< fixed << (n1*price1) + (n2*price2) << endl;



return 0;
}
