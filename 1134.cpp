#include <iostream>

using namespace std;

int main(){
int alcool1 = 0, gasolina2 = 0, diesel3 = 0, combustivel = 99;

while (combustivel !=4){
  cin >> combustivel;
  while(combustivel < 1 || combustivel > 4){
    cin >> combustivel;
  }
  if(combustivel == 1){
    alcool1++;
  }
  else if(combustivel == 2){
    gasolina2++;
  }
  else if(combustivel == 3){
    diesel3++;
  }
}

cout << "MUITO OBRIGADO" << endl;
cout << "Alcool: " << alcool1 << endl;
cout << "Gasolina: " << gasolina2 << endl;
cout << "Diesel: " << diesel3 << endl;

  return 0;
}
