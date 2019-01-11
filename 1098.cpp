#include<iostream>

using namespace std;

int main(){

  float I = 0.0;

while(I<=2.10){

  cout << "I=" << I << " J=" << 1.0+I << endl;

  cout << "I=" << I << " J=" << 2.0+I << endl;

  cout << "I=" << I << " J=" << 3.0+I << endl;


  I = 1.0*I + 0.2;
}

  return 0;
}
