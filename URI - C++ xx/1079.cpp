#include<iostream>
#include <iomanip>

using namespace std;

int main(){

int casos;
float a, b, c, media;

cin >> casos;

for(int i = 0; i<casos; i++){
  cin >> a >> b >> c;
  media = (2*a + 3*b + 5*c)/10;
  cout << setprecision (1) << fixed << media << endl;
}

  return 0;
}
