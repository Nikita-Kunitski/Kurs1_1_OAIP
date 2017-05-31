#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE,"Russian");
	int a, k, b, c, d;// a-сотни,b-десятки,c-еденицы,d-число, k-частное
	int sum; //sum-сумма
	cout<<"Введите число "; 
cin>> d;
c=d%10;
b=((d%100)-c)/10;
a=((d%1000)-b-c)/100;
sum=(a+b+c) % 3;
cout<<"Еденицы "<< c<< endl;
cout<<"Десятки "<< b<< endl;
cout<<"Сотни "<< a<< endl;
if (sum==0)
	{
		k=d/3;
    cout<<"Число делится на 3. Частное равно "<< k << endl;
}
	if (sum!=0)
	cout<<"Число не соответсвует условию"<< endl;
}