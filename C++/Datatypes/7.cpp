





	#include<iostream>
	using namespace std;


	void changeSignA(int n)
	{
		n = n * -1;
	}

	void changeSignB(int *n)
	{
		*n = *n * -1;
	}

	void changeSignC(int &n)
	{
		n = n * -1;
	}




	int main()
	{
		int number = 6;

		cout<<"Number : "<<number<<"\n";

		changeSignA(number);

		cout<<"Number : "<<number<<"\n";

		return 0;
	}
	
	
