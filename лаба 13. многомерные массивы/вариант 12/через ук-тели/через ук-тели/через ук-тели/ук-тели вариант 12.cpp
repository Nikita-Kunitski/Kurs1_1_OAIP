#include<iostream>;
#include<time.h>;
using namespace std;
void main()
{
	setlocale(LC_CTYPE,"Russian");
	const int n=3, m=3;
	int a[n][m], i, j, k=1, sum=0, prz=1;
	srand((unsigned) time(NULL));
	for (i = 0; i < n; i++)
	{ 
		for (j=0;j<m; j++)
			*(*(a+i)+j)=-10 + rand()%20;
	}
	
	for (i = 0; i < n; i++)
	{ cout<<endl;
		for(j=0;j<m; j++)
			cout<<*(*(a+i)+j)<<"\t";
	}
	cout<<endl;
	
	for (i = 0; i < n; i++)
	{ 
		for(j=0;j<m; j++)
			{if((k%2!=0) && (a[i][j]<0) && (abs(a[i][j])<i))
				{
				sum=sum+ *(*(a+i)+j);
				prz=prz* *(*(a+i)+j);
				k++;
				}
			}	
	}
	if ((sum==sum) && (prz==prz))
		cout<<"Соответствий не найдено"<<endl;
	else 
	{
	cout<<"Произведение элементов, соответствующих условию "<<prz<<endl;
	cout<<"Сумма элементов, соответствующих условию "<<sum<<endl;
	}
}