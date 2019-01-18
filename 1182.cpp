#include <iostream>
#include <iomanip>

using namespace std;

int main(){

float matriz[12][12];
int coluna;
char operacao;
float soma = 0 , media = 0;

cin >> coluna >> operacao;

for(int linha_matriz = 0; linha_matriz < 12; linha_matriz++){
  for(int coluna_matriz = 0; coluna_matriz < 12; coluna_matriz++){
    cin >> matriz[linha_matriz][coluna_matriz];
  }
}

if(operacao == 'S'){
    for(int linha_matriz = 0; linha_matriz < 12; linha_matriz++){
      soma+= matriz[linha_matriz][coluna];
  }
cout << setprecision(1) << fixed << soma << endl;
}
else if(operacao == 'M'){
  for(int linha_matriz = 0; linha_matriz < 12; linha_matriz++){
    media+= matriz[linha_matriz][coluna];
  }
  media = media/12.0;
cout << setprecision(1) << fixed << media << endl;
}



  return 0;
}
