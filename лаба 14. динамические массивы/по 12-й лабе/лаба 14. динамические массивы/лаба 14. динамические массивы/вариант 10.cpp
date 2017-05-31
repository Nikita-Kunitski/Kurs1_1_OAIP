//лаба 12
#include<iostream>;
#include<string.h>;
using namespace std;
void main()
{
	setlocale(LC_CTYPE,"Russian");
char *st1, *st2;
int i=0, k, j=0, s;
cout<<"¬ведите размер строки"<< endl;
cin>>s;
st1=new char [s+1];
st2=new char [s+1];
cout<<"¬ведите строку ";
cin>>st1;
for (i=0;*(st1+i)!='\0';i++)
{
j++;
}
cout<<j<< endl;
j--;
k=j;
for(i=0;i<=j;i++)
{
*(st2+i)=*(st1+k);
k--;
cout<<*(st2+i);
}
cout<<endl;
delete []st1;
delete []st2;
}