#include <iostream>
#include <iomanip>

using namespace std;

int main(){

char operacao;
float M[12][12];
float soma = 0;

cin >> operacao;
for(int i = 0; i < 12; i++){
  for(int j = 0; j < 12; j++){
    cin >> M[i][j];
    if((i+j) > 11){
      soma+=M[i][j];
    }
  }
}

if(operacao == 'S'){
  cout << setprecision(1) << fixed << soma << endl;
}
else{
  cout << setprecision(1) << fixed << soma/66.0 << endl;
}




  return 0;
}
