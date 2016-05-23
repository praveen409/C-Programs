




	// Default Arguments 


	#include<iostream>
	using namespace std;



	int sum(int a=0, int b=0, int c=0)
	{
		return a + b + c;
	}



	int main()
	{

		cout<<"Sum = "<<sum(12,13,5)<<"\n";

		return 0;

	}


