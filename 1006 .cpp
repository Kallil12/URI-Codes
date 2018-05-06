#include <iostream>

using namespace std;


int main () {

float x, y, k;
cin >> x;
cin >> y;
cin >> k;
float z;

z = (x*2 + y*3 + k*5)/(10.00);
cout.precision(1);

cout << "MEDIA = " << fixed <<z<< endl;




return 0;
}
