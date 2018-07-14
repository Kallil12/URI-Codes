//1029
#include<iostream>

using namespace std;

int fib(int x);
int calls;

int main(){

int N;
int X;



cin >> N;

for(int i = 0; i<N; i++){
    cin >> X;
    calls = 0;
    cout << "fib(" << X << ") = " << calls-1 << " calls = " << fib(X) << endl;

}


return 0;
}


int fib(int x){
    calls++;
    if (x == 0){
        return 0;
    }
    if (x == 1){

        return 1;
    }
    else{

        return fib(x-2) + fib(x-1);
    }
}
