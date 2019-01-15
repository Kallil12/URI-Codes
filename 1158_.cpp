#include <iostream>


using namespace std;

int main(){
  int a, b;
  int casos;
  int soma = 0;

  cin >> casos;

  for(int i = 0; i < casos; i++){
    cin >> a >> b;

    for(int j = 0; j <= b; j++){
      if(a%2 != 0){
        soma = soma + a;
      }
      a++;
    }
    cout << soma << endl;
    soma = 0;
  }

  return 0;
}
