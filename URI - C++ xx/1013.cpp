#include <iostream>
#include <stdlib.h>

using namespace std;

int main () {

int a, b, c;
int maior = 0, maior1 = 0;

cin >> a >> b >> c;

maior = (a+b+ abs(a-b))/2;

maior1 = (maior+c+ abs(maior-c))/2;

if (maior >= maior1){
    cout << maior <<" eh o maior" << endl;
}
else
    cout << maior1 <<" eh o maior" << endl;


return 0;
}
