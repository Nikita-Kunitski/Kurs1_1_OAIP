#include<iostream>
using namespace std;
int main()
{
	double a, b;
	char op; //operator
	double res; //result
	cout<<"Enter expression";
	cin>> a >> op >> b;

	switch(op)
	{
	case '+':
		res = a+b;
		break;
	case '-':
		res = a-b;
		break;
	case '*':
		res = a*b;
		break;
	case '/':
		res = a/b;
		break;
	default:
		cout<<"Bad operator"<< endl;
	       return 0;

	}
	   cout<< "Result= " <<res <<endl;

	   return 0;

}