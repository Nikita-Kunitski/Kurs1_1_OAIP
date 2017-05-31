#include <iostream>
#include <iomanip>
#include <stdio.h>
void koren(float (*) (float),float a, float b, float e);
float uravn(float x);
using namespace std;
int main()
{
	float a, b, e;
	setlocale(LC_CTYPE,"Russian");
	cout<<"¬ведите начало отрезка а= ";
	cin>>a;
	cout<<"¬ведите начало отрезка b= ";
	cin>>b;
	cout<<"¬ведите точность вычислений е= ";
	cin>>e;
	koren(uravn,a,b,e);
	return 0;
}

	float uravn(float x)
	{
	return pow(x,3)+x-4;
	}

	void koren(float (*uravn) (float),float a, float b, float e)
{
	float x;
	setlocale(LC_CTYPE,"Russian");
	while (abs(a-b)>2*e)
	{
	x=(a+b)/2;
	if ((uravn(x))*(uravn(a))<=0)
		b=x;
	else
		{
			a=x;
		}	
	}
	cout<<"корень уравнени€ x="<<x<< endl;
}

	