#include<iostream>;
#include<iomanip>;
#include<math.h>;
#include<stdio.h>;
using namespace std;
int main()
{
	setlocale(LC_CTYPE,"Russian");
	double a, x, y, q=0;
	int i, n=6;
	for (int i = 1; i <= n; i++) // e�� 2 ������
	{
cout<< "������� x"<<i<<"=";
cin>>x;
cout<< "������� y"<<i<<"=";
cin>>y;
a=x*y;
q=q+a;
	}
	cout<<"����� ����� q="<< q<< endl;
	system("pause");
	return 0;
}