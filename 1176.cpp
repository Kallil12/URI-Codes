#include <iostream>

using namespace std;

int main(){

unsigned long long int fib[61], n0 = 0, n1 = 1, n2;
fib[0] = n0;
fib[1] = n1;

for(int i = 2; i <= 60; i++){
  n2 = n1 + n0;
  fib[i] = n2;
  n0 = n1;
  n1 = n2;
}

int casos;
int n;

cin >> casos;

for(int j = 0; j < casos; j++){
  cin >> n;
  cout << "Fib(" << n << ") = " << fib[n] << endl;
}


  return 0;
}
