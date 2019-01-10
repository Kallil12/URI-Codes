#include<iostream>

using namespace std;

int main(){

int valor, i = 1, posicao_maior, maior = 0;

for(i; i<=100; i++){
  cin >> valor;
  if(valor >= maior){
    maior = valor;
    posicao_maior = i;
  }
}

cout << maior << endl;
cout << posicao_maior << endl;


  return 0;
}
