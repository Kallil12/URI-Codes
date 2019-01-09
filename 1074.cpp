#include<iostream>

using namespace std;

void classifica(int a);

int main(){

int casos, x;

cin >> casos;
for(int i = 0; i<casos; i++){
  cin >> x;
  classifica(x);
}


return 0;
}

void classifica(int a){
  if(a == 0){
    cout << "NULL" << endl;
  }

  else if(a%2 == 0){
    if(a<0){
      cout << "EVEN NEGATIVE" << endl;
    }
    else{
      cout << "EVEN POSITIVE" << endl;
    }
  }
  else if(a<0){
    cout << "ODD NEGATIVE" << endl;
  }
  else{
    cout << "ODD POSITIVE" << endl;
  }

}
