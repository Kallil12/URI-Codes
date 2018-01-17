//1028

#include <iostream>

using namespace std;

void menor(int& a, int& b); //função pra saber qual é o menor
int mmc(int a, int b);

int main(){
	
	int a,b;
	int n; 

	cin >> n;

	for(int j = 0; j<n; j++){
	cin >> a >> b;

	//a tem que ser menor que b
	menor(a,b);
	cout << mmc(a,b) << endl;

	}

	return 0;
}

//função 1: calcula qual dos valores é o menor
void menor(int& a, int& b){
	int aux;

	if (b <= a){
		aux = b;
		b = a;
		a = aux;
	}
}

//função 2: calcula o mmc entre os dois valores
int mmc(int a, int b){

int i = 2;
int div;

while(i <=a ){
		if(a%i == 0 && b%i == 0){
			div = i;
		}
		i++;

	}
	return div;

}