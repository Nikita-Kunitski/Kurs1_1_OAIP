#include<iostream>;
#include<math.h>;
using namespace std;
void main()
{
	setlocale(LC_CTYPE,"Russian");
	double j=2, b=0.5, a=2.4e-4, y, z;
	double k;
    int m=8;
	y=(m-b)/(sin(a)-exp(a));
	while (j<=3)
	{   k=a-4*j*b;
	if (k<0)
	       {
		cout<<"Подкоренное выражение не может быть отрицательным"<<endl;
	      }
	else{
		z=3*y+sqrt(k);
		cout<<"z="<< z <<endl;
	
	    }
	j=j+0.2;
	}
}