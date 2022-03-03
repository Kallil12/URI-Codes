#include <iostream>

using namespace std;

int main(){

int casos, PA, PB;
float G1,G2;
int cont = 0;
int aux;
//int PAN = -9000, PBN = 9000;

cin >> casos;

for(int i = 0; i < casos; i++){
  aux = 1;
  cin >> PA >> PB >> G1 >> G2;
  while(PA <= PB){
    PA = PA + PA*G1/100;
    PB = PB + PB*G2/100;
    cont++;
    if(cont >= 101){
      aux = 0;
      cout << "Mais de 1 seculo." << endl;
      break;
    }
  }
  if(aux == 1){
  cout << cont << " anos." << endl;
  }
  cont = 0;
}

  return 0;
}
