#include<iostream>;
#include<iomanip>;
using namespace std;
int main()
{
	setlocale(LC_CTYPE,"Russian");
int sz, a[100],i, min=0, sr=0;
cout<<"Введите размер массива ";
cin>>sz;
srand((unsigned)time(NULL));
for (int i = 0; i < sz; i++)
{
	a[i]=rand()%99;
	cout<<"a["<<i<<"]="<<a[i]<<endl;
}
for (int i = 0; i < sz; i++)
{
	if (a[i]<a[min])
		min=i;
}
cout<<"Минимальный цлен массива a["<<min<<"]="<<a[min]<<endl;
for (int i = min; i <sz; i++)
{
		a[i]=a[i+1]; 
		if (a[i]==a[min])
		{
		a[i]=a[i+1];
		sz--;
		}
}
for (int i = 0; i < sz; i++)
{
	cout<<"a["<<i<<"]="<<a[i]<<endl;
}
for (int i = 0; i < sz; i++)
{
	sr=sr+a[i];
}
sr=sr/sz;
cout<<"Среднее арифметическое массива "<< sr<<endl;
sz=sz+3;
for (int i = sz; i >=0; i--)
{
	if(i<3)
	{
		a[i]=sr;
	}
	else(a[i]=a[i-3]);
}
for (int i = 0; i < sz; i++)
{
	cout<<"a["<<i<<"]="<<a[i]<< endl;
}

}