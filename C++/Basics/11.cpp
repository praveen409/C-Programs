


	#include<iostream>
	using namespace std;
	
	int main(int argc,char *argv[])
	{
	int i,j,k,n=10,z=10;

	for(i=1;i<=n;i++)
	{
	
		for(j=1;j>i;j++)
		{
			cout << " ";
		}
		for(k=1;k<=z;k++)
		{
			cout << k << " ";
			
		}
	
	z--;
	cout << "\n";
	}


	return 0;
	}
