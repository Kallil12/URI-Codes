#include <iostream>

using namespace std;

int main(){
int number;
float hour, money;

cin >> number >> hour >> money;

float salary;

salary = hour*money;

cout << "NUMBER = " << number << endl;
cout.precision(2);
cout << "SALARY = " << "U$ "<< fixed << salary << endl;



return 0;
}
