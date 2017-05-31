#include<iostream>;
#include<time.h>;
using namespace std;
void main()
{
	setlocale(LC_CTYPE,"Russian");
	int n, m;
	int *a, i, j, k=1, sum=0, prz=1;
	cout<<"Введите число строк матрицы ";
	cin>>n;
	cout<<"Введите число столбцов";
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
		cout<<"Соответствий не найдено"<<endl;
	else 
	{
	cout<<"Произведение элементов, соответствующих условию "<<prz<<endl;
	cout<<"Сумма элементов, соответствующих условию "<<sum<<endl;
	delete [] a;
	}
}