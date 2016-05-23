
	#include<iostream>
	using namespace std;

	class Math
	{

		public:

			static int pow(int m, int n)
			{
				int i, k=1;

				for(i=1;i<=n; i++)
					k = k * m;

				return k;
			}


	};
