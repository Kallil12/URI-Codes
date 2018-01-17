//#1039

#include <iostream>
#include <math.h>

/*
é necessário verificar se o raio 1 é maior que o raio 2
e se os pontos x1 e y1 estão dentro da área do circulo do caçador
*/

using namespace std;

int main(){

	
int r1,x1,y1; //circulo caçador

int r2,x2,y2; //circulo flor

float dist;

while(cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){


dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

if ((r1-dist)>=r2){
	cout << "RICO" << endl;
	}

else{
	cout << "MORTO" << endl;

	}
}

	return 0;
}