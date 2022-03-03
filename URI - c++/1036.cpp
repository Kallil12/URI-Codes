#include <iostream> ///bhaskara
#include <math.h>

using namespace std;

int main () {

float A, B, C;
float delta;

float x1, x2;

cin >> A >> B >> C;

delta = pow(B,2) - (4*A*C);

if (delta >= 0 && A > 0){


    x1 = (sqrt(delta) - B)/ (2*A);

    x2 = (-B - sqrt(delta))/(2*A);

    cout.precision(5);
    cout << "R1 = " << fixed << x1 << endl;
    cout << "R2 = " << fixed << x2 << endl;
}
else
    cout << "Impossivel calcular" << endl;




return 0;
}
