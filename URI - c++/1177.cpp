#include <iostream>

using namespace std;

int main(){

int N[1000];
int n;
int j = 0;

cin >> n;


for(int i = 0; i < 1000; i++){
  N[i] = j;
  j++;
  if(j == n){
    j = 0;
  }
}
for(int k = 0; k < 1000; k++){
  cout << "N[" << k << "] = " << N[k] << endl;
}

  return 0;
}
