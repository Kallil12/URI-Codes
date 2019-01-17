#include <iostream>

using namespace std;

int main() {

int x[10], n;

for(int i = 0; i < 10; i++){
  cin >> n;
  if(n <= 0){
    x[i] = 1;
  }
  else{
    x[i] = n;
  }
  cout << "X[" << i << "] = " << x[i] << endl;
}


  return 0;
}
