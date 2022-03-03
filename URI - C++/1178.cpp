#include <iostream>
#include <iomanip>

using namespace std;

int main(){

double N[100];
double n;

cin >> n;

for(int i = 0; i < 100; i++){
  N[i] = n;
  n/=2;
}

for(int k = 0; k < 100; k++){
  cout << "N[" << k << "] = " << setprecision(4) << fixed << N[k] << endl;
}

  return 0;
}
