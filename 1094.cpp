#include <iostream>
#include <iomanip>

using namespace std;

int main(){

char N, C, R, S;
int animal, coelho = 0, rato = 0, sapo = 0, total = 0;
int casos;
float percentual_coelhos, percentual_ratos, percentual_sapos;

cin >> casos;
for(int i = 0; i<casos; i++){
  cin >> animal >> N;
  if(N == 'C'){
    coelho += animal;
  }
  else if(N == 'R'){
    rato += animal;
  }
  else{
    sapo += animal;
  }
}

total = sapo + coelho + rato;

cout << "Total: " << total << " cobaias" << endl;
cout << "Total de coelhos: " << coelho << endl;
cout << "Total de ratos: " << rato << endl;
cout << "Total de sapos: " << sapo << endl;

percentual_coelhos = 100.00*coelho/total*1.0;
percentual_ratos = 100.00*rato/total*1.0;
percentual_sapos = 100.00*sapo/total*1.0;

cout << "Percentual de coelhos: " << setprecision (2) << fixed << percentual_coelhos <<" %"<<  endl;
cout << "Perncetual de ratos: " << setprecision (2) << fixed << percentual_ratos <<" %"<< endl;
cout << "Perncetual de sapos: " << setprecision (2) << fixed << percentual_sapos <<" %"<< endl;

  return 0;
}
