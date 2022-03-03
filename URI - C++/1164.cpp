#include <iostream>

using namespace std;

int main(){

int casos, n, soma = 0;
int perfeito;

cin >> casos;

for(int i = 0; i < casos; i++){
  cin >> n;
  for(int j = 1; j < n; j++){
    if(n%j == 0){
      soma+=j;
    }
  }
  if(soma == n){
    cout << n << " eh perfeito" << endl;
  }
  else{
    cout << n << " nao eh perfeito" << endl;
  }
soma = 0;

}



  return 0;
}
