//1169

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int n,a,peso;

	cin >> n;


	for (int i = 0; i<n; i++){
		cin >> a;
		cout << (long long)(pow(2,a)/12000) << " kg" << endl;
	}


	return 0;
}