





	#include<iostream>
	using namespace std;


	int main()
	{
		int x = 25;
		float y = 3.14;
		char z = 'a';

		void *ptr;


		ptr = &y;

		cout<<"Value of X : "<<*(float *)ptr<<"\n";

		return 0;
	}
