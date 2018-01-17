//1240
#include <iostream>
#include <math.h>

using namespace std;

int main(){

unsigned long long a, b, n1,n2;
int cont = 0,cont2 = 0,d;

cin >> d;


while(d>0){


  cin >> a >> b;

  if(b>a){
    cout << "nao encaixa" << endl;
  }
  else{
  n1 = b;

  while(n1 > 0){
    n1 = n1/10;
    cont++;
  }
  //cout <<"Primeiro contador" <<  cont << endl;
  for(int j = 1; j<pow(10,cont); j*=10){
    if(a%j == b%j){
      cont2++;
    }
  }
  //cout << "Segundo contador" << cont2 << endl;

if(cont == cont2){
  cout << "encaixa" << endl;
}
else{
  cout << "nao encaixa" << endl;
}
cont = 0; cont2 = 0;

  }
  d--;
}

return 0;
}
