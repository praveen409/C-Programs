





	// functional overloading.


	#include<iostream>
	using namespace std;


	int sum(int a, int b)
	{
		return a + b ;
	}
	

	int sum(int a, int b, int c)
	{
		return a + b + c;
	}


	int sum(int a[], int b)
	{
		int add=0;
		
		for(int i = 0; i < b; i++)
		{
         		add = add + a[i];
		}

		return add;
	   
	}


	int main()
	{
		int a[] = {12,23,34,45,56,67,78,89};		


		cout<<"Sum = "<<sum(a[1], a[2])<<"\n";

		
		return 0;

	}


