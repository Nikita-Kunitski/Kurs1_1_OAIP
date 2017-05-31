#include<iostream>;
#include<time.h>;
using namespace std;
void main()
{
setlocale(LC_CTYPE,"Russian");
const int n=3,m=3;
int b[n][m], i, j, k=1, pr=1;
srand((unsigned)time(NULL));
for (i=0;i<n;i++)
{
	for(j=0;j<m;j++)
		*(*(b+i)+j)=rand()%10;
}

for (i=0;i<n;i++)
{cout<<endl;
	for(j=0;j<m;j++)
		cout<<*(*(b+i)+j)<<"\t";
}

for (i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		if(b[i][j]%2==0)
		pr=pr* *(*(b+i)+j);
		
	}
}
cout << endl;
cout<<"Произведение четных символов равно "<< pr<<endl;
}