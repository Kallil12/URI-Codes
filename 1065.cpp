#include <iostream>
#include <iomanip>

using namespace std;

int main(){

int x;
int cont = 0;

for(int i = 0; i<5; i++){
  cin >> x;
  if(x%2 == 0){
    cont++;
  }

}

cout << cont << " valores pares" << endl;


return 0;
}
