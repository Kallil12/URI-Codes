#include<iostream>

using namespace std;

int main(){

int gol_gremio, gol_inter, repeticao = 1;
int vitoria_gremio = 0, vitoria_inter = 0, empates = 0, grenais = 0;



while(repeticao!=2){
  cin >> gol_inter >> gol_gremio;
  grenais++;

  if(gol_gremio>gol_inter){
    vitoria_gremio++;
  }
  else if(gol_inter>gol_gremio){
    vitoria_inter++;
  }
  else{
    empates++;
  }
  cout << "Novo grenal (1-sim 2-nao)" << endl;
  cin >> repeticao;
  while(repeticao !=1 && repeticao !=2){
    cout << "Novo grenal (1-sim 2-nao)" << endl;
    cin >> repeticao;
  }
}

cout << grenais << " grenais" << endl;
cout << "Inter:" << vitoria_inter << endl;
cout << "Gremio:" << vitoria_gremio << endl;
cout << "Empates:" << empates << endl;
if(vitoria_inter>vitoria_gremio){
  cout << "Inter venceu mais" << endl;
}
else if(vitoria_gremio > vitoria_inter){
  cout << "Gremio venceu mais" << endl;
}


  return 0;
}
