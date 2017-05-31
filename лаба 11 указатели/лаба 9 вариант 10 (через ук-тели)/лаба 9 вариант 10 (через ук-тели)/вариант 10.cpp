#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

void main()
{
	setlocale(LC_CTYPE,"Russian");
	const int n=100;
	int *psz, sz, a[n];
	double sr, *psr;
	cout<<"Введите размер массива ";
	cin>>sz;
	psz=&sz;
	srand((unsigned)time(NULL));
	for (int i = 0; i < *psz; i++)
	{
	*(a+i)=rand()%99;
	cout<<"a["<<i<<"]="<<*(a+i)<<endl;
	}
	sr=(*(a+*psz-1)+ *(a+*psz-2)+ *(a+*psz-3))/3;
	psr=&sr;
	cout<<"Среднее арифметическое последних 3 членов массива равно "<<*psr<<endl;
	for (int i = 0; i < *psz; i++)
	{
		cout<<"a["<<i<<"]="<<*(a+i)<<" ";
		if (*(a+i)==*psr)
			cout<<"Соответствует условию "<< endl;
		else
		{
			cout<<"Не соответствует условию"<<endl;
		}
	}
}