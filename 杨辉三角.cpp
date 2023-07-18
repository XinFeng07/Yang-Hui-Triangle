#include<iostream>
#include<iomanip>
#include<stdlib.h>
using namespace std;
int x;
int main()
{
	cout<<"请输入行数：";
	cin>>x;
	int a[x+1][x+1];
		a[1][1]=1;
	for (int i=2;i<=x;++i)
	{
		a[i][1]=1; a[i][i]=1;
		for (int j=2;j<=i-1;++j)
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
	for (int i=1;i<=x;++i)
	{
		if (i!=x)
		{
			cout<<setw(30-3*i)<<" ";
		}
		for (int j=1;j<=i;++j)
		{
			cout<<setw(6)<<a[i][j];
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
