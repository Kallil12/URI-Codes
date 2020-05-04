#include <iostream>

using namespace std;

int main(){

int X, Z, cont = 1;

cin >> X >> Z;

while(Z<=X){
  cin >> Z;
}

int i = X+1;

while(X < Z){
  X = X + i;
  cont++;
  i++;
}


cout << cont << endl;


  return 0;
}
