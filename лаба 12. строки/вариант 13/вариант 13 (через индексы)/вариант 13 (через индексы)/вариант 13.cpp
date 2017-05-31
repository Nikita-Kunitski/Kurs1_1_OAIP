#include<iostream>;
#include<iomanip>;
#include<stdio.h>;
#include<string.h>;
using namespace std;//оформить через указатели
void main()
{
setlocale(LC_CTYPE,"Russian");
char s1[256],s2[256], sl;
int j=0, i,k, m, p1, p2, u;
cout<<"Введите предложение"<<endl;
cin.getline(s1,256,'\n');
for (i=0;s1[i]!='\0';i++)
{
j++;
}
cout<<"Количество символов в строке равно "<< j<< endl;
p1=0;
u=j;
for (i=p1;i<=j;i++)//главный цикл
{
   for (i=p1;i<=j;i++) // ищет первый пробел
   {
	if ((s1[i]==' ')||(s1[i]=='\0')) 
	
		break;
   }
   p1=i;
	
		if(s1[i]=='\0')
			break;

		for(i=p1; i<=j <<i++;)//второй пробел
		{
		if ((s1[i]==' ')||(s1[i]=='\0'))
		break;
		}

		if(s1[i]=='\0')
			break;
p2=i;
k=p2-p1;
for (i=p1;i<=j; i++)//цикл удаления
{

		s1[i]=s1[i+k];
}

/*if (s1[p2]=='\0')
	break;*/

for(i=p1;i<=j;i++) //после удаления второго слова ищем 1-й пробел в урезанной строке	
	{
	if(s1[i]==' '){p2=i;
		break;}
	}
j=j-k;
/*
for(i=p1;i<=j;i++) //ищем второй пробел, тем самым шагаем через слово относительно исходной строки
		{
			if(s1[i]==' ')
			{ p2=i;
				break;
			}
		}
p1=i;
if (s1[p1]=='\0')
	break;*/
}
for(i=0;i<=j;i++) //выводит строку по окончанию цикла
 cout<<s1[i];
cout<<endl;
}