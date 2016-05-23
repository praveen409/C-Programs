




	#include<iostream>
	
	using namespace std;


	class Math
	{
		public:
			static int square(int n)
			{
				return n * n;
			}

			static int cube(int n)
			{
				return n * n * n;
			}

			static int add(int a, int b)
			{
				return a + b;
			}

			static int add(int a, int b, int c)
			{
				return a + b + c;
			}
	};


	int main()
	{
		cout<<Math::square(9)<<"\n";

		cout<<Math::add(1,2,3)<<"\n";

		return 0;
	}
