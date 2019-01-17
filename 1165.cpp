#include <iostream>

using namespace std;

int main(){

int casos;
long int n;
int primo = 0;

cin >> casos;

for(int i = 0; i < casos; i++){
  cin >> n;
  for(int j = 2; j <= n; j++){
    if(n%j == 0){ //se entrar aqui não é primo
      primo++;
    }
  }
  if(primo <= 1){
    cout << n << " eh primo" << endl;
  }
  else{
    cout << n << " nao eh primo" << endl;
  }
  primo = 0;
}

return 0;
}
