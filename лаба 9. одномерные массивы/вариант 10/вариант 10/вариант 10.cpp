#include<stdio.h>
#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	double b;
	int a[100], rz;
	cout<<"Введите размер массива";
	cin>>rz;
	cout<<"Массив а:"<<endl;
	srand((unsigned)time (NULL));
	for (int i = 0; i <=rz; i++)
	{
		a[i]=rand()%99;
		cout<<"a"<<i<<"="<<a[i]<<endl;
	}
	b=(a[rz]+a[rz-1]+a[rz-2])/3;
	for (int i = 0; i <=rz; i++)
	{
		if (a[i]==b)
			cout<<"Совпадает a"<<i<<" член массива равный"<<a[i]<< endl;
		else cout<<"a"<<i<<"="<< a[i]<< " "<< "Соответствий не найдено"<<endl;
	}
}