#include<iostream>
using namespace std;
void main()
	{
	    int j, s, k;//j-������, s-���������, k-�������, a-�������
		double a, b;
		setlocale(LC_CTYPE, "Russian");
		cout<<"������� ���������� ����� ";
			cin>>j;
		cout<<"������� ���������� ���������� ";
			cin>>s;
			k=0;
			a=j % s;
if (a==0)
{
	b=j/s;
	cout<< "������� �� "<< b << endl;
	cout<< "� ������� "<< k << endl;
}
else {k=a;
	b = (j-a)/s;
	cout<< "������� �� "<< b << endl;
	cout<< "� ������� "<< k << endl;
}

}
