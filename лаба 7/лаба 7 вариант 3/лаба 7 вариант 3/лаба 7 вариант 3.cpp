#include<iostream>;
#include<iomanip>;
#include<math.h>;
#include<stdio.h>;
using namespace std;
int main()
{
	setlocale(LC_CTYPE,"Russian");
	double a, sum=0, z, x[]={-2,6,1.1,2.7,4};
int m;
for (int i = 0; i <= 4; i++)
{
	a=pow(x[i]-2,2);
	sum=sum+a;
}
z=8*x[3]+sum; 
cout<<"Ответ z="<<z<<endl; 

}