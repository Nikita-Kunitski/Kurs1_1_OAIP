//������ �� 7 ������������ ������
#include<iostream>;
#include<math.h>;
#include<iomanip>;
using namespace std;
int main()
{
	setlocale(LC_CTYPE,"Russian");
	int n=6;
	double q=0, *pprz, prz, x[]={3,-2,0.7,-1,-2,7}, y[]={1,5,-1.2,6,9,-4};
	pprz=&q;
	for (int i = 0; i < n; i++)
	{
		prz=x[i]*y[i];
		*pprz=*pprz+prz;
	}
	cout<<"����� ������������ ����� "<< *pprz<< endl; 
return 0;
}//���� ������ �� 7 ���� � ���� �� 9 ����������