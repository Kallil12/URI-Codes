#include <iostream>

using namespace std;

void fib(int num);

int main(){

int n;
cin >> n;
fib(n);



  return 0;
}


void fib(int num){
  int N0 = 0, N1 = 1, N2;
  cout << N0 << " " << N1;
  for(int i = 0; i < num-2; i++){
    N2 = N1+N0;
    N0 = N1;
    N1 = N2;
    cout << " "<< N2;
  }
  cout << endl;
}
