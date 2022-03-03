#include <iostream>

using namespace std;

int main () {

int casos;
int velocidades, maior = 0;

while(cin >> casos){
  for(int i = 0; i < casos; i++){
    cin >> velocidades;
    if(velocidades > maior){
      maior = velocidades;
    }
  }
    if(maior < 10){
      cout << "1" << endl;
    }
    else if(maior >= 10 && maior < 20){
      cout << "2" << endl;
    }
    else{
      cout << "3" << endl;
    }
    maior = 0;
  }


  return 0;
}
