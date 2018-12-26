#include <iostream>

using namespace std;

int main(){

float v1, v2, v3, v4, v5, v6;
int cont = 0;

cin >> v1 >> v2 >> v3 >> v4 >> v5 >> v6;
float valores[] = {v1,v2,v3,v4,v5,v6};

for(int i = 0; i<6; i++){
  if(valores[i] > 0){
    cont++;
  }
}

cout << cont << " valores positivos" << endl;



return 0;
}
