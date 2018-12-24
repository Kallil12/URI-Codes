#include <iostream>
#include <iomanip>

using namespace std;

int main(){

float salario;
float novo_salario, reajuste_ganho, percentual;

cin >> salario;

if(salario >= 0 && salario <= 400.00){
  novo_salario = salario*1.15;
  reajuste_ganho = novo_salario - salario;
  cout << "Novo salario: " << setprecision (2) << fixed << novo_salario << endl;
  cout << "Reajuste ganho: " << setprecision (2) << fixed << reajuste_ganho << endl;
  cout << "Em percentual: 15 %" << endl;
}

else if(salario >= 400.01 && salario <= 800.00){
  novo_salario = salario*1.12;
  reajuste_ganho = novo_salario - salario;
  cout << "Novo salario: " << setprecision (2) << fixed << novo_salario << endl;
  cout << "Reajuste ganho: " << setprecision (2) << fixed << reajuste_ganho << endl;
  cout << "Em percentual: 12 %" << endl;
}

else if(salario >= 800.01 && salario <= 1200.00){
  novo_salario = salario*1.10;
  reajuste_ganho = novo_salario - salario;
  cout << "Novo salario: " << setprecision (2) << fixed << novo_salario << endl;
  cout << "Reajuste ganho: " << setprecision (2) << fixed << reajuste_ganho << endl;
  cout << "Em percentual: 10 %" << endl;
}

else if(salario >= 1200.01 && salario <= 2000.00){
  novo_salario = salario*1.07;
  reajuste_ganho = novo_salario - salario;
  cout << "Novo salario: " << setprecision (2) << fixed << novo_salario << endl;
  cout << "Reajuste ganho: " << setprecision (2) << fixed << reajuste_ganho << endl;
  cout << "Em percentual: 7 %" << endl;
}

else if(salario >2000.00){
  novo_salario = salario*1.04;
  reajuste_ganho = novo_salario - salario;
  cout << "Novo salario: " << setprecision (2) << fixed << novo_salario << endl;
  cout << "Reajuste ganho: " << setprecision (2) << fixed << reajuste_ganho << endl;
  cout << "Em percentual: 4 %" << endl;
}


return 0;
}
