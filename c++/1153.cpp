#include <iostream>

using namespace std;

int fatorial(int n);

int main(){

int n, fat;

cin >> n;

fat = fatorial(n);

cout << fat << endl;


  return 0;
}

int fatorial(int n){
  if(n == 0){
    return 1;
  }
  else{
    return n*fatorial(n-1);
  }
}
