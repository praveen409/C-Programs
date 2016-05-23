

	#include<iostream>
	using namespace std;
	
	int main(int argc,char *argv[])
	{
	int n,flag = 0;

	cout << "Enter the value : ";
	cin >> n;
	
	for(int i=2;i < n;i++)
	{
		if(n % i ==0)
		{
		cout << n << " is Not Prime\n";
		break;
		}
		else
		flag = 1;
		

	}
	if(flag == 1)
	{
		cout << n <<" is Prime Number\n";
	}
	

	return 0;
	}
	
