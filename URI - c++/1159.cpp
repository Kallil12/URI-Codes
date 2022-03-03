#include <iostream>

using namespace std;

int main(){

int n, soma = 0;

cin >> n;

while(n!= 0){

  if(n%2 == 0){
    for(int i = 0; i<5;i++){
      soma +=n;
      n+=2;
    }
  }
  else{
    n = n+1;
    for(int i = 0; i<5;i++){
      soma +=n;
      n+=2;
    }
  }
  cout << soma << endl;
  soma = 0;
  cin >> n;
}


  return 0;
}
