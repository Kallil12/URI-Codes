//1161
#include <iostream>

using namespace std;

unsigned long long int fatorial (int x){

	unsigned long long int y = 1;

	if (x >= 2){
	for(int i = x; i>0; i--){
		y = y*i;

	}

	return y;
	}
	else{
		return 1;
	}
}


int main(){
	int a, b;

	while(cin >> a >> b){

	unsigned long long int j,k;
	j = fatorial(a);
	k = fatorial(b);

	cout << j + k << endl;
	}



	return 0;
}