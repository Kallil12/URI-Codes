#include <iostream>

using namespace std;

int main(){

int a, b, aux, soma = 0;

cin >> a >> b;

while( a > 0 && b > 0){
  if(a>b){
    aux = a;
    a = b;
    b = aux;
  }
  for(int i = a; i <= b; i++){
    cout << i << " ";
    soma+=i;
  }
  cout << "Sum=" << soma << endl;
  cin >> a >> b;
  soma = 0;
}


  return 0;
}
