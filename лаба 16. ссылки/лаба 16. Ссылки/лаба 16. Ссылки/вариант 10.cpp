#include <iostream>
#include <time.h>
#include <stdio.h>
int maximum(int a[3][5],int &n ,int &m);
int povt(int a[3][5], int &n, int &m, int &max);
void element(int a[3][5], int &n, int &m, int &max, int &k);
using namespace std;
 void main ()
 {
 setlocale(LC_CTYPE,"Russian");
 const int n=3, m=5;
 int a[n][m], i,j,max=0, k=0, l=0, g=0; //g, k, l �������
 int p,h,x,s;//���� ���������� ����������� ��������������
 srand((unsigned) time(NULL));
 p=n;
 h=m;
	for(i=0;i<n;i++)//random
		{
			cout<<endl;
			for(j=0;j<m;j++)
				{
					a[i][j]=1+rand()%10;
					cout<<"a["<<i+1<<"]["<<j+1<<"]="<<a[i][j]<<"\t";
				}
		}	
	//max
	max=maximum(a, p, h);
	// kol-vo povtoreniy max
	k=povt(a,p,h,max);
		//���������� ����� �������������� ���������
		element(a,p,h,max,k);
 }

 int maximum(int a[3][5],int &n ,int &m)
 {
	 int max=0;
 for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		if(a[i][j]>max)
		{
		max=a[i][j];
		}
	}
	cout<<endl;
	cout<<"������������ ������� �"<<max;
	cout<<endl;
	return max;
 }

 int povt(int a[3][5], int &n, int &m, int &max)
 { int k=0;
 for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		if(a[i][j]==max)
			k++;
	cout<<"������������ ������� "<< max<<" ����������� "<<k<<" ���";
		cout<<endl;
		return k;
 }

 void element(int a[3][5], int &n, int &m, int &max, int &k)
 { int l=0,s,g=0,z=0;
 for(int x=1;x<max;x++)
		{
			for(int i=0;i<n;i++)
				{
					for(int j=0;j<m;j++)//������� ������� ��� ����������� �������
					if(a[i][j]==x)
							l++;
				}
			cout<<x<<" ����������� "<< l<<" ���"<<endl;
			if ((l>k)&&(l>z)) //���������� ������� ������������� ���������� ���-�� ���
			
			{ z=l;
				s=x;
			}
			l=0;
		}
		if (z>k)
			cout<<"����� ������������� ������������ ������� "<<s<<" ����������� "<<z<< " ���"<<endl;
		if(z<=k)
			cout<<"����� ������������� ������������ ������� "<<max<<" ����������� "<<k<< " ���"<<endl;
 }

 