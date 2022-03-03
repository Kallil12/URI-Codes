//1043 URI

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	

float a,b,c;

cin >> a;
cin >> b;
cin >> c;

//float area = ((a+b)*c)/2.0; 	//calcular area do trapezio
float per = a+b+c;

if((b-c) < a && a < (b+c))
{
	if((a-c)< b && b<(a+c))
	{
		if((b-a) < c && c<(b+a))
		{
			cout << "Perimetro = " << setprecision(1) << fixed << per << endl;
		}
	}
}

else
	{
		//cout << "Area = " << area << endl;
		cout << "Area = " << setprecision(1) << fixed << ((a+b)*c)*0.5 << endl;
	}


return 0;

}