#include <iostream>

using namespace std;

int main(){

int N, menor = 99999, pos;

cin >> N;

int valores[N];

for(int i = 0; i < N; i++){
  cin >> valores[i];
  if(valores[i] < menor){
    menor = valores[i];
    pos = i;
  }

}

cout << pos+1 << endl;


  return 0;
}
