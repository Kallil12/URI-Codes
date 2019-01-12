#include <iostream>
#include <iomanip>

using namespace std;

int main(){

float nota, media = 0, resposta = 1;
int cont = 0;

while (resposta != 2){
  while(cont !=2){
    cin >> nota;
    if(nota>=0 && nota <=10){
      media +=nota;
      cont++;
    }
    else{
      cout << "nota invalida" << endl;
    }

  }
cout << "media = "<< setprecision (2) << fixed << media/2.0 << endl;
cont = 0;
media = 0;
cout << "novo calculo (1-sim 2-nao)" << endl;
cin >> resposta;
while(resposta >= 3 && resposta <=0){
  cout << "novo calculo (1-sim 2-nao)" << endl;
  cin >> resposta;
}
}

  return 0;
}
