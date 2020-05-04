//1028
#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int a,b;
	int n; 
	int aux; //variavel p calcular o menor
	int i;
	int div;
	int tmp; 

	cin >> n;

	for(int j = 0; j<n; j++){
	cin >> a >> b;
	
	if (b <= a){
		aux = b;
		b = a;
		a = aux;
	}


	for( i =2; i <=a; i ++ ){
		if(a%i == 0 && b%i == 0){
			div = i;
		}

	}
	cout <<  div << endl;


}

	return 0;
}