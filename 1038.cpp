///1038

#include <iostream>

using namespace std;

int main () {

int cod;
float n;

cin >> cod;
cin >> n;

switch (cod){

case 1: ///hotdog
cout.precision(2);
cout << "Total: R$ " << fixed << n*4.0<< endl;
break;

case 2: ///xsalada
cout.precision(2);
cout << "Total: R$ " << fixed << n*4.5 << endl;
break;

case 3: ///xbacon
cout.precision(2);
cout << "Total: R$ " << fixed << n*5.0 << endl;
break;

case 4: ///torrada simples
cout.precision(2);
cout << "Total: R$ " << fixed << n*2.0 << endl;
break;

case 5: ///refrigerante
cout.precision(2);
cout << "Total: R$ " << fixed << n*1.5 << endl;
break;
}



return 0;
}
