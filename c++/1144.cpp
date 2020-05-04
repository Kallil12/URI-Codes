#include <iostream>
#include <cmath>

using namespace std;

int main(){

int linhas;
long int p2, p3;
cin >> linhas;

for(int i = 1; i<=linhas; i++){
  p2 = pow(i,2);
  p3 = pow(i,3);
  cout << i << " " << p2 << " " << p3 << endl;
  cout << i << " " << p2+1<< " " << p3+1<< endl;
}


  return 0;
}
