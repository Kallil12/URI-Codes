#include <iostream>

using namespace std;

void compara(int rafa, int beto, int carl){
if(rafa>beto && rafa>carl){
  cout << "Rafael ganhou" << endl;
}
else if(beto>rafa && beto>carl){
  cout << "Beto ganhou"<<endl;
}
else{
  cout << "Carl ganhou" << endl;
}

}

int main(){

int x,y;
int casos;
int valor_rafa, valor_beto, valor_carl;

cin >> casos;

for (int i = 0; i<casos; i++){
  cin >> x >> y;

  valor_rafa = (3*x)*(3*x)+(y*y);

  valor_beto = 2*(x*x)+(5*y)*(5*y);

  valor_carl = -100*x + (y*y*y);

  compara(valor_rafa,valor_beto,valor_carl);
}






return 0;
}
