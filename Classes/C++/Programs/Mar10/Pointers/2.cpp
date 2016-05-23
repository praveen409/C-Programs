


	#include<iostream>

	using namespace std;


	int main()
	{

		int *ptr;


		ptr = new int;

		*ptr = 56;

		cout<<*ptr<<"\n";


		delete ptr;


		return 0;
	}
