#include <iostream>
#include <iomanip>

using namespace std;

int main(){

int numerador, denominador, casos;
float resposta;

cin >> casos;

for(int i = 0; i<casos; i++){
  cin >> numerador >> denominador;
  if(denominador == 0){
    cout << "divisao impossivel" << endl;
  }
  else{
    resposta = 1.0*numerador/denominador*1.0;
    cout << setprecision (1) << fixed << resposta << endl;
  }
}

  return 0;
}
