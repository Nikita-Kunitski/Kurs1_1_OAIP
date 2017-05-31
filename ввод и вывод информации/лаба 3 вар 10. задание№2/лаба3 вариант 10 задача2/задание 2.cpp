#include<iostream>
using namespace std;
void main()
	{
	    int j, s, k;//j-яблоки, s-школьники, k-корзина, a-остаток
		double a, b;
		setlocale(LC_CTYPE, "Russian");
		cout<<"Введите количество яблок ";
			cin>>j;
		cout<<"Введите количество школьников ";
			cin>>s;
			k=0;
			a=j % s;
if (a==0)
{
	b=j/s;
	cout<< "Каждому по "<< b << endl;
	cout<< "В корзине "<< k << endl;
}
else {k=a;
	b = (j-a)/s;
	cout<< "Каждому по "<< b << endl;
	cout<< "В корзине "<< k << endl;
}

}
