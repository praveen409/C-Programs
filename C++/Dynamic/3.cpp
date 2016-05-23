


	#include<iostream>
	using namespace std;

	int main()
	{		
		int *ptr;
		int number, i;
		
		cout<<"Enter the number of elements : ";
		cin>>number;

		ptr = new int[number];


		for(i = 0; i < number; i++)
		{
			cout<<"Enter the value : ";
			cin>> *(ptr + i);
		}
		


		cout<<"Elements given : ";
		for(i = 0; i < number; i++)
		{
			cout<<ptr[i]<<" ";
		}

		cout<<"\n";


		delete[] ptr;

		return 0;
	}
