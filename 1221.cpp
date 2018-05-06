#include <iostream>

using namespace std;

int main() {

int a, b;
cin >> a;

for (int i = 0; i<a; i++){
    cin >> b;
    for(int j = 2; j<=b; j++){
        if(b%j == 0){
            cout << "n eh primo" << endl;
            break;
        }
        else
            cout << "eh primo" << endl;
            break;
    }

}

return 0;
}
