#include <iostream>
#include <stdio.h>
#include <cmath>


using namespace std;


int main(){

double A, B, C;

cin >> A >> B >> C;

double array[] = {A,B,C};
int n = 3;
double temp;
for(int i=1;i<n;++i){
     for(int j=0;j<(n-i);++j)
         if(array[j]<array[j+1])
         {
             temp=array[j];
             array[j]=array[j+1];
             array[j+1]=temp;
         }
}

double a = array[0];double b = array[1];double c = array[2];
double a2 = pow(a,2);double b2 = pow(b,2);double c2 = pow(c,2);
/*
cout << "A = " << a << endl;
cout << "B = " << b << endl;
cout << "C = " << c << endl;
*/

if(a >= (b+c)){
  cout << "NAO FORMA TRIANGULO" << endl;
}
else{
  if(a2 == (b2+c2)){
    cout << "TRIANGULO RETANGULO" << endl;
  }
  if(a2 > (b2+c2)){
    cout << "TRIANGULO OBTUSANGULO" << endl;
  }
  if(a2 < (b2+c2)){
    cout << "TRIANGULO ACUTANGULO" << endl;
  }
  if (a == b && a == c){
    cout << "TRIANGULO EQUILATERO" << endl;
  }
  if (a == b && a != c || a == c && a != b || b == c && b != a){
      cout << "TRIANGULO ISOSCELES" << endl;
    }
  }


return 0;
}
