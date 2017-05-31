#include<iostream>;
#include<iomanip>;
#include<time.h>;
#include<math.h>;
using namespace std;
int main()
{
double a[100],b;
int i,sz, min=0;
setlocale(LC_CTYPE,"Russian");
cout<<"Введите размер массива а";
cin>>sz;
cout<<"Массив а:"<<endl;
srand((unsigned)time(NULL));
for (int i = 0; i < sz; i++)
{
	a[i]=rand()%99;
	cout<<"a["<<i<<"]="<<a[i]<<endl;
}
for (int i = 1; i < sz; i++)
{
	if (a[i]<a[min])
		min=i;
}
cout<<"min"<<a[min]<<endl;
for (int i = 0; i < sz; i++)
{
	if(i%2==0)
		a[i]=a[min];
	cout<<"a["<<i<<"]="<<a[i]<< endl;
}
for (int i = 0; i <=sz; i++)
{
	if (a[i]==a[min])
	{
	a[i]=a[i+1];
	sz--;
	}
	cout<<"a["<<i<<"]="<<a[i]<<endl;
}
}