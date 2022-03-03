//1212

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

	unsigned long long int n1, n2, n1_ ,n2_;
	int cont = 0;
	int c = 0; //carry

	cin >> n1 >> n2;

	while( n1 != 0 && n2 != 0){
		while(n1_%10 != 0 && n2_%10 !=0){
			n1_ = n1%10;
			n2_ = n2%10;
			
			n1 = n1/10;
			n2 = n2/10;

			if((n1_ + n2_ + c )>9){
				cont++;
				c = 1;
			}
			else{
				c = 0;
			}
		}
		if(cont == 1){
			cout << "1 carry operation." << endl;
		}
		else if(cont > 1){
			cout << cont << " carry operations." << endl;
		}
		else{
			cout << "No carry operation." << endl;
		}
		cont = 0;
		cin >> n1 >> n2;

	}
	return 0;
}
