





	#include<iostream>
	using namespace std;


	void changeSign1(int n)
	{
		n = n * -1;
	}

	void changeSign2(int *n)
	{
		*n = *n * -1;
	}

	void changeSign3(int &n)
	{
		n = n * -1;
	}




	int main()
	{
		int number = 6;

		cout<<"Number : "<<number<<"\n";
		
		changeSign1(number);
		cout<<"Number:  "<<number<<"\n";

		changeSign3(number);

		cout<<"Number : "<<number<<"\n";

		return 0;
	}
	
	
