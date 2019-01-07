#include <iostream>
#include <iomanip>

using namespace std;

int main(){

int x;
int cont_par = 0, cont_impar = 0, cont_pos = 0, cont_neg = 0;

for(int i = 0; i<5; i++){
  cin >> x;
  if(x%2 == 0){
    cont_par++;
  }
  else{
    cont_impar++;
  }
  if(x > 0){
    cont_pos++;
  }
  else if(x < 0){
    cont_neg++;
  }

}

cout << cont_par << " valor(es) par(es)" << endl;
cout << cont_impar << " valor(es) impar(es)" << endl;
cout << cont_pos << " valor(es) positivo(s)" << endl;
cout << cont_neg << " valor(es) negativo(s)" << endl;


return 0;
}
