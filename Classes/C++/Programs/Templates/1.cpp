



	#include<iostream>

	using namespace std;


	template <typename Type>
	void maximum(Type a, Type b)
	{
		if(a > b)
			cout<<a<<" is bigger.....\n";
		else
			cout<<b<<" is bigger....\n";

	}



	int main()
	{
		string s1 = "Hello";
		string s2 = "World";
	

		maximum('x', 'c');

		maximum(12.23, 56.45);

		maximum(12, 32);


		maximum(s1, s2);

		return 0;
	}
