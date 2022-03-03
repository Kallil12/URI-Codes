#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  float soma = 0;

  for(int i = 1; i<=100; i++){
    soma = soma+(1.0/i);
  }

cout << setprecision(2) << fixed << soma << endl;
  return 0;
}
