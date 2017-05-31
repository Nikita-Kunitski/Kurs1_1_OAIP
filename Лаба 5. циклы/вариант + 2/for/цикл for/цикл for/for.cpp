#include<math.h>;
#include<iostream>;
using namespace std;
int main()
{
double b=0.5, j, a, y, z;
int m=8, i;
setlocale(LC_CTYPE,"Russian");
a=2.4e-4;
for (i=1; i<=3; i++)
  {
	printf("¬ведите j= "); 
	scanf("%f",& j);
	y=(m-b)/(sin(a)-exp(a));
	z=3*y+sqrt(a-4*j*b);
	printf("z= %f ", z); // что значит эта запись?? в частности цифры!
  cout<<endl;
}
}