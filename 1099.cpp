#include <iostream>

using namespace std;

int main() {

int casos, a, b, aux, soma_impar = 0;

cin >> casos;

for(int i = 0; i < casos; i++){
  cin >> a >> b;
  if(a>b){
    aux = a;
    a = b;
    b = aux;
  }
  for(int i = (a+1); i < b; i++){
    if(i%2 != 0){
      soma_impar +=i;
    }
  }
  cout << soma_impar << endl;
  soma_impar = 0;
}


  return 0;
}
