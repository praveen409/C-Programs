





	#include<iostream>
	using namespace std;


	namespace Math
	{
		
		int square(int n)
		{
			return n * n;
		}
		
	}






	
	using namespace Math;

	int main()
	{
		int x = 7, y;
		
	

		y = square( x );

		cout<<"Square : "<<y<<"\n";

		return 0;
	}
