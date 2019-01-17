#include <iostream>
#include <iomanip>

using namespace std;

int main(){

float A[100];

for(int i = 0; i < 100; i++){
  cin >> A[i];
  if(A[i] <= 10){
    cout << "A[" << i << "] = " <<setprecision(1) << fixed << A[i] << endl;
  }
}

  return 0;
}
