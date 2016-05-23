

	#include<iostream>
	using namespace std;
	
	int main(int argv,char *argc[])
	{
	int a[100];

	cout << "The series is .... : \n";
	a[0]=0;
	a[1]=1;
	int i=1,n=0;
	do
	{
	a[i+1]=a[i-1]+a[i];
	i++;
	}while(i != 100);

	for(i=0;a[i] < 100;i++)
	{
	cout << a[i] << " ";
	}
	
	cout <<endl;
	return 0;
	}
