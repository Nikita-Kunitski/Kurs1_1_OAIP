#include <iostream>;
using namespace std;
void main ()
{ 
	setlocale(LC_CTYPE,"Russian");
	double x, y, z;
	int t;
	cout<<"Введите сторону x= "; 
	cin>>x;
	cout<<"Введите сторону y= ";
	cin>>y;
	cout<<"Введите сторону z= ";
	cin>>z;
	t=2;
	if ((x+y>z) && (x+z>y) && (y+z>x))
	{
		t=1;
	cout<<"Треугольник существует"<<endl;
	}
	else
	    {
		t=0;
	    cout<<"Треугольник не существует"<<endl;
	    }   
	switch (t)
	{
		case 1:
			if ((pow(x, 2)+pow(y, 2) > pow(z, 2)) || (pow(x, 2)+pow(y, 2) > pow(z, 2)) || (pow(x, 2)+pow(y, 2) > pow(z, 2)))
		{
			cout<<"Треугольник остроуголоьный"<<endl;
		}
	
	else
			cout<<"Треугольник не является остроугольным "<<endl;
			break;
		case 0:
			cout<<" "<<endl;
			break;	
	}  
}