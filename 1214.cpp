//1214
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	
	int n; //casos teste
	int na = 0;
	int total = 0, nota;
	//na é num de alunos e no é nota de alunos
	float media, cont = 0.0;

	cin >> n;

	for(int i = 0; i<n; i++){
		total = 0;
		cont = 0;

		cin >> na;
		int no[na];
		for(int j = 0; j<na; j++){
			cin >> nota;
			no[j] = nota;
			total = total + no[j];
			media = total/na;
		}
		for(int k = 0; k<na; k++){
			if(no[k] > media){
				cont++;
			}
		}
		float resultado = (cont/(na*1.0)) * 100.0;
		cout << fixed;
		cout << setprecision(3) << resultado  << "%" <<  endl;
	}

	return 0;
}