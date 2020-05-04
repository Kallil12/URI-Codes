#include <iostream>
#include <cmath>

using namespace std;

int main(){
// dados de entrada e saída (dia, hora, minuto e segundo):
//converter para segundos
//24 horas em segundos = 86400

int dia1, hora1, minuto1, segundo1, tempo1;
int dia2, hora2, minuto2, segundo2, tempo2;
int dia_final, hora_final, minuto_final, segundo_final, tempo_total;

cout << "Dia ";
cin >> dia1;

cin >> hora1; cout << " : "; cin >> minuto1 ; cout << " : "; cin >> segundo1;

tempo1 = hora1*3600 + minuto1*60 + segundo1;
tempo1 = 86400 - tempo1;

cout << "Dia ";
cin >> dia2;

cin >> hora2;
cout << " : ";
cin >> minuto2 ;
cout << " : ";
cin >> segundo2;

tempo2 = hora2*3600 + minuto2*60 + segundo2;

tempo_total = tempo1+tempo2;

hora_final = tempo_total/3600;
tempo_total = tempo_total%3600;
minuto_final = tempo_total/60;
tempo_total = tempo_total%60;
segundo_final = tempo_total;

dia_final = dia2 - dia1 - 1;
if(hora_final >= 24){
  hora_final = hora_final%24;
  dia_final++;
}



cout << dia_final << " dia(s)" << endl;
cout << hora_final << " hora(s)" << endl;
cout << minuto_final << " minuto(s)" << endl;
cout << segundo_final << " segundo(s)" << endl;



return 0;
}
