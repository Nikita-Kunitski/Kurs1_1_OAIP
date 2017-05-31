#include<iostream>;
#include<iomanip>;
#include<stdio.h>;
#include<string.h>;
using namespace std;//оформить через указатели
void main()
{
setlocale(LC_CTYPE,"Russian");
char s1[256], sl;
int j=0, i,k, m, p1, p2;
cout<<"Введите предложение"<<endl;
cin.getline(s1,256,'\n');
for (i=0;s1[i]!='\0';i++)
{
j++;
}
cout<<"Количество символов в строке равно "<< j<< endl;
p1=0;
for (i=p1;i<=j;i++)//главный цикл
{
   for (i=p1;i<=j;i++)
   {
	if (s1[i]==' ')
	break;
   }
p1=i;
if(s1[i+1]=='\0')
	break;
for(i=p1; i<=j<<i++;)
{
if (s1[i]==' ')
	break;
}
if(s1[i+1]=='\0')
	break;
p2=i;
k=p2-p1;
j=j-k;
for (i=0;i<=j; i++)
{
	if(i>=p1)
		s1[i]=s1[i+k];
}
for(i=0;i<=j;i++)
	{if(s1[i]==' ')
	break;
	}
p1=i+1;
for(i=p1;i<=j;i++)
		{
			if(s1[i]==' ')
				break;
		}
p1=i;
}
for(i=0;i<=j;i++)
 cout<<s1[i];
cout<<endl;
}