#include<iostream>;
using namespace std;
int main()
{
	setlocale(LC_CTYPE,"Russian");
	double d, g, h, c, a[]={0.5,2,2.5,1,0,8}, b[]={2.3,4,0.5,2,3,9};
	int n=6, i;
	d=0;
	for (int i = 0; i <=5; i++)
	{
		g=a[i]+b[i];
		if (g>=0)
		{
		c=sqrt(g);
		}
		else cout<<"����������� ��������� ������������"<<endl;
		h=c/i;
		d=d+(c/i+1);//������ ���� ������� ������������ "0", ��� ����� ���? ��� ������������ �������
	}
	cout<<"d="<<d<<endl;
return 0;
}