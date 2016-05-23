



	#include<iostream>
	using namespace std;


	class Integer
	{
		private:
			int number;

		public:
			void set(int v)
			{
				number = v;
			}

			void put()
			{
				cout<<number;
			}


	};


	int main()
	{
		Integer n;

		n.set(10);

		n.put();
		
		return 0;
	}
