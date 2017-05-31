#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<string.h>
using namespace std;
void main()
{
	setlocale(LC_CTYPE,"Russian");
	char s1[256], s2[256];
	int j=0,i,k=0,m,p1,p2,v,z,l=0; //j-счетчик длины строки, k-cчетчик пробелов
	cout<<"Введите строку ";
	cin.getline(s1,256,'\n');
		
		for(i=0;s1[i]!='\0';i++) //цикл находит длину строки и считает кол-во пробелов
			{
				j++;
				if(s1[i]==' ')
					k++;
			}

		cout<<"Количество пробелов в строке "<<k<<endl;
			p1=0;
			v=0;
			
for(i=0;i<k;i++) //главный цикл условия
		{

			for(z=p1;s1[z]!='\0';z++)
				{
				if(s1[z]==' ')
					break;
				}
			if (s1[z]=='\0')
				p2=z;
			if (s1[z]==' ')
			p2=z+1;

					for(z=p1,v;z<p2;v++,z++) //записываем нечетное слово в новую строку
					{
						s2[v]=s1[z];
						l++;
					}
					

					if(z>j)
					break;
					if (z<j)
					{
						for(z=p2+1;s1[z]!='\0';z++)
							{
								if((s1[z]==' ')||(s1[z]=='\0'))
									break;
							}
						p1=z+1;
					}
					if(z==j)
						break;
		}

for(i=0;i<l;i++)
	cout<<s2[i];
cout<<endl;
}