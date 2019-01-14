#include <iostream>
#include <cmath>

using namespace std;

int main(){

int linhas, p1 = 1, p2 = 1, p3 = 1;
cin >> linhas;

for(int i = 1; i<=linhas; i++){
  cout << i << " " << pow(i,2)<< " " << pow(i,3) << endl;
}


  return 0;
}
