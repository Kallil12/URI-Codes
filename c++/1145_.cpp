#include <iostream>

using namespace std;

int main(){

int a, b, aux;
int cont = 1;
int j = 0;

cin >> a >> b;


while(cont <= b){
  for(int i = 0; i < a; i++){
    if(cont == b){
      cout << cont;
    }
    else{
    cout << cont << " ";
    cont++;
    }
  }
  cout << endl;
}

  return 0;
}
