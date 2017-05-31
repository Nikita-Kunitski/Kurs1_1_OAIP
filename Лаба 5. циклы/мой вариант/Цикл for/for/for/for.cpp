#include <iostream>;
#include<math.h>
using namespace std;
void main()
{
	setlocale(LC_CTYPE,"Russian");
double s=7.4, f, k, y, v;
double a, b, c, d, e;
int i, m=10;
f=3.2e-4;
c=log(5.2*f);
d=exp(-s)+2;
e=c/d;
y=s/e;
if (y<0)
	cout<<"Логорифм отрицательного числа не существует"<< endl; 
else {
	for (i=1;i<=3;i++)
{
	cout<< "k= ";
	cin>> k;
	a=(1+m*y-m*k);
	b=log(-y);
v=a/b;	
cout<<"v="<<v<<endl;
}
}
}