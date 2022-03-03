#include <iostream>
#include <iomanip>

using namespace std;

int main(){

float matriz[12][12];
int linha;
char operacao;
float soma = 0 , media = 0;

cin >> linha >> operacao;

for(int linha_matriz = 0; linha_matriz < 12; linha_matriz++){
  for(int coluna_matriz = 0; coluna_matriz < 12; coluna_matriz++){
    cin >> matriz[linha_matriz][coluna_matriz];
  }
}

if(operacao == 'S'){
    for(int coluna_matriz = 0; coluna_matriz < 12; coluna_matriz++){
      soma+= matriz[linha][coluna_matriz];
  }
cout << setprecision(1) << fixed << soma << endl;
}
else if(operacao == 'M'){
  for(int coluna_matriz = 0; coluna_matriz < 12; coluna_matriz++){
    media+= matriz[linha][coluna_matriz];
  }
  media = media/12.0;
cout << setprecision(1) << fixed << media << endl;
}



  return 0;
}
