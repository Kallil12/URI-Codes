#include <iostream>

using namespace std;

int main() {

int x[10], n;

cin >> n;

for(int i = 0; i < 10; i++){
  x[i] = n;
  n*=2;
  cout << "N[" << i << "] = " << x[i] << endl;
}


  return 0;
}
