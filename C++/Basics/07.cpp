

	#include<iostream>
	using namespace std;
	
	int main(int argv,char *argc[])
	{
	int n,k=1;

	cout << "Enter the N value : ";
	cin >> n;
	
	for(int i=1;i != (n+1);i++)
	{
	k = k * i;
	}
	
	cout << "Factorial of "<< n <<" is "<< k <<endl;
	
	return 0;
	}
