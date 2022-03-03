#include <iostream>
#include <iomanip>

using namespace std;

int main(){

float salario,taxa;
float fatia1, fatia2, fatia3;

cin >> salario;

if(salario >= 0 && salario <= 2000.00){
  cout << "Isento" << endl;
}
else if(salario >= 2000.01 && salario <= 3000.00){
fatia1 = (salario-2000.0);
taxa = fatia1*0.08;

cout << "R$ " << setprecision (2) << fixed << taxa << endl;
}

else if(salario >=3000.01 && salario <= 4500.00){
fatia2 = (salario-3000.00);
fatia1 = (salario-fatia2-2000.00);
taxa = fatia1*0.08 + fatia2*0.18;

cout << "R$ " << setprecision (2) << fixed << taxa << endl;
}

else{  //salario acima de 4500 (28% de imposto)
fatia3 = (salario-4500.00);
fatia2 = (salario-fatia3-3000.00);
fatia1 = (salario-fatia2-fatia3-2000.00);

taxa = fatia3*0.28 + fatia2*0.18 + fatia1*0.08;
cout << "R$ " << setprecision (2) << fixed << taxa << endl;
}


return 0;
}
