#include <iostream>

using namespace std;

int main() {

int par[5], impar[5];
int n;
int p = 0, i = 0;

for(int numeros = 0; numeros < 15; numeros++){
  cin >> n;

  if(n%2 == 0){
    par[p] = n;
    p++;
  }

  else{
    impar[i] = n;
    i++;
  }


  if(p == 5){
    for(int a = 0; a < 5; a++){
      cout << "par[" << a << "] = " << par[a] << endl;
      par[a] = 0;
    }
    p = 0;
  }
  if(i == 5){
    for(int b = 0; b < 5; b++){
      cout << "impar[" << b << "] = " << impar[b] << endl;
      impar[b] = 0;
    }
    i = 0;
  }

}
for(int K = 0; K < i; K++){
  cout << "impar[" << K << "] = " << impar[K] << endl;
}
for(int J = 0; J < p; J++){
  cout << "par[" << J << "] = " << par[J] << endl;
}


return 0;
}
