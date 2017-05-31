#include<iostream>;
using namespace std;
int main()
{
	double q, p, a, y[]={3,-2,0.9,0.5,1};
	int i;
	p=0;
	a=1;
	for (int i = 0; i <= 4; i++)
	{
		if (p<y[i])
		{
		p=p;
		}
		else p=y[i];
	}
	for (int i = 0; i <=4; i++)
	{
		a=a*(y[i]-5);//(-2*-7*-5.9*-5.5*-4)-2
	}
	q=a+p;
	cout<<"q="<<q<<endl;
}