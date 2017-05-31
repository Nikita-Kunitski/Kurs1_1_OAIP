#include<iostream>;
#include<stdio.h>;
#include<math.h>;
#include<iomanip>;
using namespace std;
int main()
{
	double x, c, s, w, v, a=1.2, d, m=-1.5; //s, c-вспомогательная переменная
	int k=3;
	x=-7e-3;
	while (m<=6)
	{
	  if (x<m/2)
	   w=sqrt(-0.2*x)*k; 
	  else
		  w=exp(2*x*k);
	  c=pow(w,3);
	  d=abs(x-a);
	  s=c + d;
	  v=sqrt(s)/log(1+a);
	  printf("v=%f\n",v);
	  m=m+0.2;
	}
return 0;
system("pause");
}