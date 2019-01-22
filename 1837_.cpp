#include <iostream>

using namespace std;

int main () {

int a, b, q, r;

cin >> a >> b;

r = (a%b);
q = (a+(-1*r))/b;

cout << q << endl;
cout << r << endl;

  return 0;
}
