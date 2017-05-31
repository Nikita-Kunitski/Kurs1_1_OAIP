#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;
void main()
{
	setlocale(LC_CTYPE,"Russian");
	char st1[256], st2[256];
	int i,p=0;
	cout<<"Введите строку ";
	cin.getline(st1,256,'\n');
	for (i=0;st1[i]!='\0';i++)
		if (st1[i]==' ')
			p++;
	cout<<"Количество пробелов в строке равно "<< p<<endl;
		if (p==1)
			p=p;
	
}