#include <iostream>
#include <string.h>

using namespace std;

int main(){

char verteb[15];
char tipo[15];
char alimento[15];

cin >> verteb;
cin >> tipo;
cin >> alimento;


if(strcmp(verteb,"vertebrado")==0){
  if(strcmp(tipo,"ave")==0){
    if(strcmp(alimento,"carnivoro")==0){
      cout << "aguia" << endl;
    }
    else{
      cout << "pomba" << endl;
    }
  }
  else if(strcmp(alimento,"onivoro")==0){
    cout << "homem" << endl;
  }
  else{
    cout << "vaca" << endl;
  }
}
else if(strcmp(tipo,"inseto")==0){
  if(strcmp(alimento,"hematofago")==0){
    cout << "pulga" << endl;
  }
  else{
    cout << "lagarta" << endl;
  }

}
else if(strcmp(alimento,"hematofago") == 0){
  cout << "sanguessuga" << endl;
}
else {
  cout << "minhoca" << endl;
}




return 0;
}
