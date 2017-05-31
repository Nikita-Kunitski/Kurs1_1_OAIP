#include<iostream>;
#include<math.h>;
#include<stdio.h>;
#include<iomanip>;
using namespace std;
int main()
{
	setlocale(LC_CTYPE,"Russian");
	double a, s=5.2, j, x, v;
	int i;
	j=10.4e4;
	for (int i = 1; i <= 4; i++)
	{
		cout<<"¬ведите x= ";
		cin>>x;
		if (2*s>x*j)
		{
		a=cos(j*x);
		v=pow(a,2);
		}
		if (2*s<x*j)
			v=tan(j*x)*2;
		if (2*s==x*j)
			v=5-exp(x/2);
	    cout<<"v= "<<v<<endl;
	}
	system("pause");
	return 0;
}