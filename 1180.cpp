#include <iostream>

using namespace std;

int main(){

int N, menor, posicao, aux;

cin >> N;

int X[N];

cin >> X[0];
menor = X[0];

for(int i = 1; i < N; i++){
  cin >> X[i];
  aux = X[i];
  if( aux < menor){
    menor = aux;
    posicao = i;
  }

}

cout << "Menor valor: " << menor << endl;
cout << "Posicao: " << posicao << endl;


  return 0;
}
