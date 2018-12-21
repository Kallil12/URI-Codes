#include <iostream>

using namespace std;

int main() {

int a, b;
cin >> a;

for (int i = 0; i<a; i++){
    cin >> b;

    if (b == 2){
      cout << "Prime" << endl;
    }
    else{
      if (b%2 == 0){

        cout << "Not Prime" << endl;
      }

      else{
        for(int j = 3; j<b; j++){
            if(b%j == 0){
                cout << "Not Prime" << endl;
                break;
            }
            else{
                cout << "Prime" << endl;
                break;
            }
        }
      }
    }
}

return 0;
}
