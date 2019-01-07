#include <iostream>
#include <iomanip>

using namespace std;

int main(){

float x, media=0.0;
int cont = 0;

for(int i = 0; i<=5; i++){
  cin >> x;
  if(x > 0){
    cont++;
    media = media + x;
  }

}

cout << cont << " valores positivos" << endl;
cout << setprecision (1) << fixed << media/cont*1.0 << endl;

return 0;
}
