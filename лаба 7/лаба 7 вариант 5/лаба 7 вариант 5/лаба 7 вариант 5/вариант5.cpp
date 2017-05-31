#include<iostream>;
using namespace std;
int main()
{
	double a=1.5, b=-4.15, w[10], v[]={1,1.5,-4,-1.9,3};
	int i;
	for (int i = 0; i <= 4; i++)
	{
		if (v[i]>0)
		{
			w[i]=a+v[i];
		}
		else w[i]=b/v[i];
		cout<<"w"<<i<<"="<<w[i]<<endl;
	}
return 0;
}