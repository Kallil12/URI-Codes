#include <iostream>

using namespace std;

int main(){

int a, b, aux;
int cont = 0;

cin >> a >> b;

if (a>b){
  aux = a;
  a = b;
  b = aux;
}

for(int i = (a+1) ; i < b; i++){
  if(i%2 != 0){
    cont +=i;
  }
}

cout << cont << endl;

return 0;
}
