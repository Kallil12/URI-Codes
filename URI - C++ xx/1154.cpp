#include <iostream>
#include <iomanip>

using namespace std;

int main(){

int idades = 0, cont = 0;
float media, soma = 0.0;

while(idades >= 0){
  cin >> idades;
  if(idades >=0){
    soma = soma+idades;
    cont++;
  }  
}

media = 1.0*soma/(1.0*cont);

cout << setprecision(2) << fixed << media << endl;


  return 0;
}
