#include <iostream>
#include<string.h>
#include<time.h>
using namespace std;
void stroka_10();
void matrix_10();
void matrix_12();
int main(void)
{
setlocale(LC_CTYPE,"Russian");
int c;
	do
	{
	cout<<endl;
	cout<<"�������"<<endl;
	cout<<"1- ������ ������"<<endl;
	cout<<"2- �������� ��� �������� 10 �������"<<endl;
	cout<<"3- �������� ��� �������� 12 �������"<<endl;
	cout<<"4- �����"<<endl;
	cin>>c;
	switch(c)
		{
			case 1 :stroka_10();break;
			case 2 :matrix_10();break;
			case 3 :matrix_12();break;
			case 4 :break;
		}
	}
	while(c!=4);
}

void stroka_10()
{
	setlocale(LC_CTYPE,"Russian");
	char *st1, *st2;
	int i=0, k, j=0, s;
cout<<"������� ������ ������"<< endl;
cin>>s;
st1=new char [s+1];
st2=new char [s+1];
cout<<"������� ������ ";
cin>>st1;

		for (i=0;*(st1+i)!='\0';i++)
			{
				j++;
			}
cout<<j<< endl;
j--;
k=j;

	for(i=0;i<=j;i++)
		{
			*(st2+i)=*(st1+k);
			k--;
			cout<<*(st2+i);
		}

	cout<<endl;
	delete []st1;
	delete []st2;
}

void matrix_10()
{
	using namespace std;
	setlocale(LC_CTYPE,"Russian");
	int m,n;
	int *b, i, j, k=1, pr=1;
	cout<<"������� ���������� ����� ������� ";
	cin>>n;

	cout<<"������� ���������� �������� ";
	cin>>m;

	b=new int[n*m*sizeof(int)];
		srand((unsigned)time(NULL));

	for (i=0;i<n;i++)
	{
			for(j=0;j<m;j++)
				*(b+i*m+j)=rand()%10;
	}

	for (i=0;i<n;i++)
	{
			cout<<endl;
				for(j=0;j<m;j++)
					cout<<*(b+i*m+j)<<"\t";
	}

	for (i=0;i<n;i++)
	{
			for(j=0;j<m;j++)
				{
					if(*(b+i*m+j)%2==0)
						pr=pr* *(b+i*m+j);
		
				}
	}
	cout << endl;
	cout<<"������������ ������ �������� ����� "<< pr<<endl;
	delete b;
}

void matrix_12()
{
	setlocale(LC_CTYPE,"Russian");
	int n, m;
	int *a, i, j, k=1, sum=0, prz=1;
	cout<<"������� ����� ����� ������� ";
	cin>>n;
	cout<<"������� ����� ��������";
	cin>>m;
	a=new int[n*m*sizeof(int)];
	srand((unsigned) time(NULL));
	for (i = 0; i < n; i++)
	{ 
		for (j=0;j<m; j++)
			*(a+i*m+j)=-10 + rand()%20;
	}
	
	for (i = 0; i < n; i++)
	{ cout<<endl;
		for(j=0;j<m; j++)
			cout<<*(a+i*m+j)<<"\t";
	}
	cout<<endl;
	
	for (i = 0; i < n; i++)
	{ 
		for(j=0;j<m; j++)
			{if((k%2!=0) && (*(a+i*m+j)<0) && (abs(*(a+i*m+j)<i)))
				{
				sum=sum+ *(a+i*m+j);
				prz=prz* *(a+i*m+j);
				k++;
				}
			}	
	}
	if ((sum==sum) && (prz==prz))
		cout<<"������������ �� �������"<<endl;
	else 
	{
	cout<<"������������ ���������, ��������������� ������� "<<prz<<endl;
	cout<<"����� ���������, ��������������� ������� "<<sum<<endl;
	delete [] a;
	}
}