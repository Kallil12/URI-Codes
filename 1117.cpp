#include <iostream>
#include <iomanip>

using namespace std;

int main(){

float nota, media = 0;
int cont = 0;

while(cont !=2){
  cin >> nota;
  if(nota>=0 && nota <=10){
    media +=nota;
    cont++;
  }
  else{
    cout << "nota invalida" << endl;
  }

}

cout << "media = "<< setprecision (2) << fixed << media/2.0 << endl;


  return 0;
}
