#include<iostream>;
#include<string.h>;
using namespace std;
void main()
{
char st1[100], st2[100], *pst1, *pst2;
int i=0, k, j=0;
cin>>st1;//кол-во символов не превышает 99 символов
for (pst1=st1;*pst1!='\0';pst1++)
{
j++;
}
cout<<j<< endl;
j--;
*pst1--;
for(i=0;i<=j;i++)
{pst2=st2;
*pst2=*pst1;
pst1--;
cout<<*pst2;
}
cout<<endl;
}