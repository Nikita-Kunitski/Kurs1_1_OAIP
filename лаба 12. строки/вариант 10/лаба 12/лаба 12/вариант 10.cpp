#include<iostream>;
#include<string.h>;
using namespace std;
void main()
{
char st1[100], st2[100];
int i=0, k, j=0;
cin.getline(st1,100,'\n');//кол-во символов не превышает 99 символов
for (i=0;st1[i]!='\0';i++)
{
j++;
}
cout<<j<< endl;
j--;
k=j;
for(i=0;i<=j;i++)
{
st2[i]=st1[k];
k--;
cout<<st2[i];
}
cout<<endl;
}