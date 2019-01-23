#include <iostream> ///1478
#include <iomanip>
#include <cmath>

using namespace std;

#define MAX 200


int matriz[MAX][MAX];
int main() {

    int n;

    ///cout << "Insira a dimensao da matriz: ";




    while(cin >> n && n > 0){
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                matriz[i][j] = abs(i-j)+1;
                /*if(i == 0 || j == 0){
                    matriz[i][j] = (i+j+1) ;
                }

                else if(i == j){
                    matriz[i][j] = 1;
                }

                else if((i*j) > n){
                    if(i-j < 0){
                        matriz[i][j] = ((i-j)*-1)+1;
                    }
                    else{
                        matriz[i][j] = (i-j)+1;
                    }
                }

                else{
                    matriz[i][j] = (i*j);
                }*/
            }
        }

        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                cout << setw(3) << matriz[i][j];
                if(j+1 < n){
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }


return 0;
}
