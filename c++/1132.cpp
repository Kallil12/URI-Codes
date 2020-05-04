#include <iostream>

using namespace std;

int main(){

int a, b, cont = 0, aux;
cin >> a >> b;

if(a>b){
  aux = a;
  a = b;
  b = aux;
}

for(int i = a; i <= b; i++){
  if(i%13 !=0){
    cont+=i;
  }
}

cout << cont << endl;



  return 0;
}
