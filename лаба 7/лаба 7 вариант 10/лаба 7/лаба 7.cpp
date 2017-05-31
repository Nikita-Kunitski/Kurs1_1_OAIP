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
	for (int i = 1; i <= n; i++) // eще 2 задачи
	{
cout<< "¬ведите x"<<i<<"=";
cin>>x;
cout<< "¬ведите y"<<i<<"=";
cin>>y;
a=x*y;
q=q+a;
	}
	cout<<"—умма равна q="<< q<< endl;
	system("pause");
	return 0;
}