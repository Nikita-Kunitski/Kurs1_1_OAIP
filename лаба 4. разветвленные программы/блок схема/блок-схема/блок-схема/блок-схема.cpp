#include <iostream>;
using namespace std;
void main ()
{ 
	setlocale(LC_CTYPE,"Russian");
	double x, y, z;
	int t;
	cout<<"������� ������� x= "; 
	cin>>x;
	cout<<"������� ������� y= ";
	cin>>y;
	cout<<"������� ������� z= ";
	cin>>z;
	t=2;
	if ((x+y>z) && (x+z>y) && (y+z>x))
	{
		t=1;
	cout<<"����������� ����������"<<endl;
	}
	else
	    {
		t=0;
	    cout<<"����������� �� ����������"<<endl;
	    }   
	switch (t)
	{
		case 1:
			if ((pow(x, 2)+pow(y, 2) > pow(z, 2)) || (pow(x, 2)+pow(y, 2) > pow(z, 2)) || (pow(x, 2)+pow(y, 2) > pow(z, 2)))
		{
			cout<<"����������� ��������������"<<endl;
		}
	
	else
			cout<<"����������� �� �������� ������������� "<<endl;
			break;
		case 0:
			cout<<" "<<endl;
			break;	
	}  
}