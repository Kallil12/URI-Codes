#include <iostream>

using namespace std;

int main(){

int a, b;

cin >> a >> b;

while(a!=b){
  if(b>a){
    cout << "Crescente" << endl;
  }
  else{
    cout << "Decrescente" << endl;
  }
  cin >> a >> b;
}


  return 0;
}
