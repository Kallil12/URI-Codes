#include <iostream>

using namespace std;

int main(){
	
	float n1,n2,n3,n4; //pesos 2, 3,4 e 1
	float n5; //nota da recuperação
	float media2; //media após recuperação
	bool n = 0; 

	//usar o setprecision (2) para limitar a quantidade de casas decimais
	cin >> n1 >> n2 >> n3 >> n4;

	float media = (2*n1 + 3*n2 + 4*n3 + n4)/10.0;

	cout << "Media: " << media << endl;

	if (media >= 5.0 && media <=6.9){
		cout << "Aluno em exame." << endl;
		n = 1;
	} 

	else if(media < 5.0){
		cout << "Aluno reprovado." << endl;

	}
	else {
		cout << "Aluno aprovado." << endl;
	}


	//condição de recuperação
	if(n == true){
		
		cin >> n5;
		media2 = (media+n5)/2.0;
		cout << "Nota do exame: " << n5 << endl;
		if (media2 >=5.0){
			cout << "Aluno aprovado." << endl;
		}
		else{
			cout << "Aluno reprovado." << endl;
		}
		cout << "Media final: " << media2 << endl;
	}


	return 0;
}