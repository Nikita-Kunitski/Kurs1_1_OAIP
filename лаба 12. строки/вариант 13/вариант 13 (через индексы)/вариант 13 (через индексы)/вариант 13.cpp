#include<iostream>;
#include<iomanip>;
#include<stdio.h>;
#include<string.h>;
using namespace std;//�������� ����� ���������
void main()
{
setlocale(LC_CTYPE,"Russian");
char s1[256],s2[256], sl;
int j=0, i,k, m, p1, p2, u;
cout<<"������� �����������"<<endl;
cin.getline(s1,256,'\n');
for (i=0;s1[i]!='\0';i++)
{
j++;
}
cout<<"���������� �������� � ������ ����� "<< j<< endl;
p1=0;
u=j;
for (i=p1;i<=j;i++)//������� ����
{
   for (i=p1;i<=j;i++) // ���� ������ ������
   {
	if ((s1[i]==' ')||(s1[i]=='\0')) 
	
		break;
   }
   p1=i;
	
		if(s1[i]=='\0')
			break;

		for(i=p1; i<=j <<i++;)//������ ������
		{
		if ((s1[i]==' ')||(s1[i]=='\0'))
		break;
		}

		if(s1[i]=='\0')
			break;
p2=i;
k=p2-p1;
for (i=p1;i<=j; i++)//���� ��������
{

		s1[i]=s1[i+k];
}

/*if (s1[p2]=='\0')
	break;*/

for(i=p1;i<=j;i++) //����� �������� ������� ����� ���� 1-� ������ � ��������� ������	
	{
	if(s1[i]==' '){p2=i;
		break;}
	}
j=j-k;
/*
for(i=p1;i<=j;i++) //���� ������ ������, ��� ����� ������ ����� ����� ������������ �������� ������
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
for(i=0;i<=j;i++) //������� ������ �� ��������� �����
 cout<<s1[i];
cout<<endl;
}