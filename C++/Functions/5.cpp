




	// Default Arguments 


	#include<iostream>
	using namespace std;



	int sum(int a, int b, int c=0)
	{
		return a + b + c;
	}



	int main()
	{

		cout<<"Sum = "<<sum(12, 23, 45)<<"\n";

		return 0;

	}


