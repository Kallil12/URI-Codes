#include <iostream>

using namespace std;

int main(){

int A, N, soma = 0;
int aux;
cin >> A >> N;

while( N <= 0){
  cin >> N;
}

for(int i = 0; i < N; i++){
  aux = A+i;
  soma+=aux;
}

cout << soma << endl;

  return 0;
}
