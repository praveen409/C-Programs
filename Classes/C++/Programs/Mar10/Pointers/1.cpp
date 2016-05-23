



	#include<iostream>

	using namespace std;


	int main()
	{
		int x = 65;
		int *ptr;


		ptr = &x;

		cout<<"The address of X		: "<<ptr<<"\n";
		cout<<"The value stored in X 	: "<<*ptr<<"\n";

		return 0;
	}
