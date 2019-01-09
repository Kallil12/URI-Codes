#include<iostream>

using namespace std;

int main(){

int casos, valor;
int cont_in=0, cont_out=0;

cin >> casos;

for(int i = 0; i<casos; i++){
  cin >> valor;
  if(valor >= 10 && valor <= 20){
    cont_in++;
  }
  else{
    cont_out++;
  }
}

cout << cont_in << " in" << endl;
cout << cont_out << " out" << endl;



return 0;
}
