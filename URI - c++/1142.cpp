#include <iostream>

using namespace std;

int main(){

int a, p1=1, p2=2, p3=3;

cin >> a;

for(int i = 0; i<a; i++){
  cout << p1 << " " << p2 << " " << p3 << " PUM" << endl;
  p1+=4; p2+=4; p3+=4;
}

  return 0;
}
