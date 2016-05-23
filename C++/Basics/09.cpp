


	#include<iostream>
	using namespace std;
	
	int main(int argc,char *argv[])
	{
	int i,j,k,n=5,z=5;

	for(i=1;i<=n;i++)
	{
		for(j=1;j>i;j++)
		{
			cout << " ";
		}
		for(k=z;k>=1;k--)
		{
			cout << k << " ";
			
		}
	z--;
	cout << "\n";
	}


	return 0;
	}
