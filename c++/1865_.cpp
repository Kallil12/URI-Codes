#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){

int casos, forca;
char nome[100];

cin >> casos;
gets(nome);
cin >> forca;

for(int i = 0; i < casos; i++){
  if(strcmp(nome,"Thor")==0){
    cout << "Y" << endl;
  }
  else{
    cout << "N" << endl;
  }

  gets(nome);
  cin >> forca;
}


  return 0;
}
