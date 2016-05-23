


	#include<iostream>
	using namespace std;
	int main()
	{
	int z=5;
	int n=5;
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
		{
		cout<<" ";
		}
		for(k=1;k<=z;k++)
		{
		cout<<k;
		}
	z--;
	cout<<endl;
	}
	return 0;
	}
