#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
  float soma = 0;
  int j = 0;

  for(int i = 1; i<=39; i+=2){
    soma = soma+(1.0*i/pow(2,j));
    j++;
  }

cout << setprecision(2) << fixed << soma << endl;

  return 0;
}
