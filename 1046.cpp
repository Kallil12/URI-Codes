#include <iostream>

using namespace std;

int main(){

int inicio, fim;

cin >> inicio >> fim;

if ((inicio - fim) == 0){
  cout << "O JOGO DUROU 24 HORA(S)" << endl;
}
else if(fim > inicio){
  cout << "O JOGO DUROU " << fim-inicio << " HORA(S)" << endl;
}
else {
  cout << "O JOGO DUROU " << (24-inicio+fim) << " HORA(S)" <<endl;
}



return 0;
}
