#include <iostream>
#define PI 3.14159
using namespace std;

int main () {

float A, B, C;

cout << "Insira 3 numeros: " << endl;
cin >> A >> B >> C;

cout.precision(3);
cout << "TRIANGULO: " << fixed <<(A*C)/2 <<endl;
cout << "CIRCULO: " << fixed << PI*(C*C) << endl;
cout << "TRAPEZIO: " << fixed << ((A+B)*C)/2 << endl;
cout << "QUADRADO: " << fixed << (B*B) << endl;
cout << "RETANGULO: " << fixed << (A*B) << endl;


return 0;
}
