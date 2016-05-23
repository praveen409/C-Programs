


	#include<iostream>
	using namespace std;

	int main()
	{
	
		int *ptr;


		ptr = new int;

			cout<<"Enter the value : ";
			cin>>*ptr;

			cout<<*ptr<<"\n";

			
			if(*ptr % 2 == 0)
			{
				cout<<*ptr<<" is even number...\n";
			}
			else
			{
				cout<<*ptr<<" is odd number....\n";
			}
			

		delete ptr;


		return 0;
	}
