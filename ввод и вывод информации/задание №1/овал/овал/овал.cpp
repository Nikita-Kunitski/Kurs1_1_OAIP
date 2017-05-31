#include <iostream>
#include <iomanip>
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel=' ';
	cout<<"Введите символ "; cin>>c;
	    cout<<setw(42)<<setfill(probel)<<probel;
	cout<<setw(8)<<setfill(c)<<c<<endl;
	    cout<<setw(38)<<setfill(probel)<<probel;
	cout<<setw(16)<<setfill(c)<<c<<endl;
	    cout<<setw(35)<<setfill(probel)<<probel;
	cout<<setw(22)<<setfill(c)<<c<<endl;		
	    cout<<setw(33)<<setfill(probel)<<probel;
	cout<<setw(26)<<setfill(c)<<c<<endl;
        cout<<setw(33)<<setfill(probel)<<probel;
	cout<<setw(26)<<setfill(c)<<c<<endl;
	    cout<<setw(35)<<setfill(probel)<<probel;
	cout<<setw(22)<<setfill(c)<<c<<endl;
	    cout<<setw(38)<<setfill(probel)<<probel;
	cout<<setw(16)<<setfill(c)<<c<<endl;
		cout<<setw(42)<<setfill(probel)<<probel;
	cout<<setw(8)<<setfill(c)<<c<<endl;
	   system("pause");
}