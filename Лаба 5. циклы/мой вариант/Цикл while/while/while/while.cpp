#include<iostream>;
#include<iomanip>;
using namespace std;
int main()
{
	setlocale(LC_CTYPE,"Russian");
double y, v, s=7.4, f=3.2e-4, k=0;
int m=10;
 y=s/(log(5.2*f)/(exp(-s)+2));
 //if (y<0)
	// cout<<"Логорифм отрицательного числа не существует"<<endl;
 //else {
while (k<=4)
   {
	 v=(1+m*y-m*k)/log(-y);
	 cout<<"v= "<< setprecision(5)<<v << endl;
	 k=k+0.5;
   }
return 0;
}
//}