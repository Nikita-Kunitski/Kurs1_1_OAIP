#include <stdio.h> 
#include<iostream>
void ff(int a[3][3], const  int &N);
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "russian");
	const int N = 3;
	int a[3][3], i, j;
	cout << "Vvedute matpucy" << endl;
	for (i = 0; i<N; i++)
	{
		for (j = 0; j<N; j++)
			cin >> a[i][j];

	}
	cout << "o6ychnaya matpuca:" << '\n';
	for (i = 0; i < N; ++i)
	{
		for (j = 0; j < N; ++j)
			cout << a[i][j] << " ";
		cout << '\n';
	}
	ff(a, N);
}
void ff(int a[3][3], const int &N)
{
	int i, j;
	for (j = 0; j < N; ++j)
	{
		for (i = 0; i < N; ++i)
			if (a[i][j] <= 0) break;
		if (i == N) break;
	}
	if (j < N)
	{
		if (j != 0)
			for (i = 0; i < N; ++i)
				a[i][j - 1] = -a[i][j - 1];
	}
	cout << "u3menennaya matpuca:" << endl;
	for (i = 0; i < N; ++i)
	{
		for (j = 0; j < N; ++j)
			cout << a[i][j] << " ";
		cout << '\n';
	}
	system("pause");
}


















//#include <iostream>
//char *compress(char *s);
//using namespace std;
//int main(void)
//{
//	setlocale(LC_CTYPE, "Russian");
//
//	char s[256], m[256], n[256];
//	cout << "Vvedute ctpoky" << endl;
//	gets_s(s);
//	*compress(s);
//	cout << "............................................" << endl;
//	cout << "Vvedute ctpoky" << endl;
//	gets_s(m);
//	*compress(m);
//	cout << "............................................" << endl;
//	cout << "Vvedute ctpoky" << endl;
//	gets_s(n);
//	*compress(n);
//	cout << "............................................" << endl;
//	return 0;
//}
//char *compress(char *s)
//{
//	int i;  char *ps;
//	for (i = 0, ps = s; *ps; i++, ps++)
//	{
//		if (*ps == ' ')
//		{
//
//		}
//
//		else
//			cout << *ps;
//
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//
//}

