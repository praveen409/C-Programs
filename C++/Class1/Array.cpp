


	#include<iostream>
	
	using namespace std;

	int main(int argc, char *argv[])
	{		
		int a[10], x;
		bool flag = false;


		cout<<"Enter 10 elements : ";
		for(int i=0; i<10; i++)
		{
			cin>>a[i];
		}


		cout<<"Enter the number to find : ";
		cin>>x;


		for(int i = 0; i < 10; i++)
		{
			if(a[i] == x)
			{
				flag = true;
				break;
			}
		}

		if(flag)
		{
			cout<<x<<" is found....\n";
		}
		else
		{
			cout<<x<<" is not found...\n";
		}

		return 0;
	}
