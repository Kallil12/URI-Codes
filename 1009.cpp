#include <iostream>

using namespace std;

int main(){
//int number;
char NOME[20];
double salario,vendas;

cin >> NOME >> salario >> vendas;

double total;

total = salario + (vendas*0.15);

cout.precision(2);
cout << "TOTAL = " << "R$ "<< fixed << total << endl;



return 0;
}
