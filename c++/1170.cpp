//1170

#include <iostream>

using namespace std;

int main(){
	
 int n, dias = 0; //num de casos e num de dias que blob se alimenta
 float x; //quantidade de alimento

	cin >> n;
 
 for (int i = 0; i<n; i++){
 	cin >> x;
 	while (x > 1.0){
 		dias++;
 		x = x/2.0;
 	}
 cout << dias << " dias" << endl;
 dias = 0;
}

//cout << dias << " dias" << endl;


	return 0;
}