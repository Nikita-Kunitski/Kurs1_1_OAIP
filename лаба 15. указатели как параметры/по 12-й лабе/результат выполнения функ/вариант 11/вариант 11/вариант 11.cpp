#include<iostream>
#include<iomanip>
#include<stdio.h>
char *text(char *s1);
using namespace std;
int main(void)
{
	setlocale(LC_CTYPE,"Russian");
	char s1[256];
	cout<<"¬ведите строку ";
	gets(s1);
	*text(s1);
	return 0;
}

 char *text(char *s1)
{
	char s2[256];
	int j=0,m=0,i,b,k;
	     for (i=0,k=0;s1[i]!='\0';i++)
		 {
			 if (s1[i]==' ')
			 {
					s2[k]=s1[i-1];//дописать. не хочет писать последнюю букву
				    k++;
					m++;
			 }
			 j++;
		 }
		 s2[k]=s1[j-1];
		  cout<<endl;
		  for (k=0;k<=m;k++)
			  cout<<s2[k] << ' ';
		  cout<<endl;
		  return s2;
}