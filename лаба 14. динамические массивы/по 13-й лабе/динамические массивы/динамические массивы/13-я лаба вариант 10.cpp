#include<iostream>;
#include<time.h>;
using namespace std;
void main()
{
setlocale(LC_CTYPE,"Russian");
int m,n;
int *b, i, j, k=1, pr=1;
cout<<"Введите количество строк матрицы ";
cin>>n;
cout<<"Введите количество столбцов ";
cin>>m;
b=new int[n*m*sizeof(int)];
srand((unsigned)time(NULL));
for (i=0;i<n;i++)
{
	for(j=0;j<m;j++)
		*(b+i*m+j)=rand()%10;
}

for (i=0;i<n;i++)
{cout<<endl;
	for(j=0;j<m;j++)
		cout<<*(b+i*m+j)<<"\t";
}

for (i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		if(*(b+i*m+j)%2==0)
		pr=pr* *(b+i*m+j);
		
	}
}
cout << endl;
cout<<"Произведение четных символов равно "<< pr<<endl;
delete b;
}