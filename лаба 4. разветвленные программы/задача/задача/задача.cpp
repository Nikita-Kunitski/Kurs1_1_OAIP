#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE,"Russian");
	int a, k, b, c, d;// a-�����,b-�������,c-�������,d-�����, k-�������
	int sum; //sum-�����
	cout<<"������� ����� "; 
cin>> d;
c=d%10;
b=((d%100)-c)/10;
a=((d%1000)-b-c)/100;
sum=(a+b+c) % 3;
cout<<"������� "<< c<< endl;
cout<<"������� "<< b<< endl;
cout<<"����� "<< a<< endl;
if (sum==0)
	{
		k=d/3;
    cout<<"����� ������� �� 3. ������� ����� "<< k << endl;
}
	if (sum!=0)
	cout<<"����� �� ������������ �������"<< endl;
}