#include<iostream>;
#include<iomanip>;
using namespace std;
int main()
{
	setlocale(LC_CTYPE,"Russian");
int sz, *psz, a[100],i, min=0, *pmin, sr=0, *psr;
cout<<"Введите размер массива ";
cin>>sz;
psz=&sz;
srand((unsigned)time(NULL));
for (int i = 0; i < *psz; i++)
{
	*(a+i)=rand()%99;
	cout<<"a["<<i<<"]="<<*(a+i)<<endl;
}
for (int i = 0; i < *psz; i++)
{
	if (*(a+i)<*(a+min))
		min=i;
}
cout<<"Минимальный цлен массива a["<<min<<"]="<<a[min]<<endl;
for (int i = min; i <*psz; i++)
{
		*(a+i)=*(a+i+1); 
		if (*(a+i)==*(a+min))
		{
		*(a+i)=*(a+i+1);
		sz--;
		}
}
for (int i = 0; i < *psz; i++)
{
	cout<<"a["<<i<<"]="<<*(a+i)<<endl;
}
for (int i = 0; i < *psz; i++)
{
	sr=sr+ *(a+i);
}
sr=sr/ *psz;
cout<<"Среднее арифметическое массива "<< sr<<endl;
for (int i = 0; i < 3; i++)
{
	*(a+i)=sr;
}
for (int i = 0; i < *psz; i++)
{
	cout<<"a["<<i<<"]="<<*(a+i)<< endl;
}

}