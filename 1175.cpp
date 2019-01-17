#include <iostream>


using namespace std;

int main(){

float A[20], B[20];
int j = 19;
for(int i = 0; i < 20; i++){
  cin >> A[i];
  B[j] = A[i];
  j--;
  }

for(int k = 0; k < 20; k++){
  cout << "N[" << k << "] = " << B[k] << endl;
}

  return 0;
}
