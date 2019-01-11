#include<iostream>

using namespace std;

int main(){

int I = 1;
int J1 = 7, J2 = 6, J3 = 5;

while(I<=9){
  cout << "I=" << I << " J=" << J1 << endl;
  J1+=2;
  cout << "I=" << I << " J=" << J2 << endl;
  J2+=2;
  cout << "I=" << I << " J=" << J3 << endl;
  J3+=2;
  I+=2;
}


  return 0;
}
