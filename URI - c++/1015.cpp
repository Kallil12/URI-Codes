#include <iostream>
#include <cmath>

using namespace std;

int main () {

double x1,y1,x2,y2;

cin >> x1 >> y1 >> x2 >> y2;
double quad1, quad2;

quad1 = pow(x2-x1,2);
quad2 = pow(y2-y1,2);

cout.precision(4);
cout << fixed << sqrt (quad1 + quad2);



return 0;
}
