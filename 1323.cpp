#include<iostream>
#include<cmath>

using namespace std;

int main(){

int a;
int sum = 0;
int b;
cin >> a;

while(a != 0){
    for( b = 1; b<=a; b++){
        sum = sum + pow(b,2);
    }
    cout << sum << endl;
    cin >> a;
    b = 1;
    sum = 0;
}


return 0;
}
