//1042

#include <iostream>

using namespace std;


void ordena(int v[]){

	int n = 3; //usado no for para varrer o array
	int aux;

	for(int i = 0; i<n; i++){
		for(int j = 0; j<n-i-1; j++){
			if(v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	}

	
	for(int x = 0; x<n; x++){
		cout << v[x] << endl;
	}
}

int main(){
	
int a,b,c;

cin >> a >> b >> c;

int vetor[] = {a,b,c}; 

ordena(vetor);

cout << endl;
cout << a << endl;
cout << b << endl;
cout << c << endl;

	return 0;
}