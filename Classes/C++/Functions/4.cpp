



	#include<iostream>
	using namespace std;

	inline int maximum(int a, int b);

	int main()
	{	
		int a = 56, b = 45;

		cout<<"Maximum value : "<<maximum(a, b)<<"\n";

		return 0;
	}


	int maximum(int a, int b)
	{
		if(a > b)
			return a;
		else
			return b;
	}
