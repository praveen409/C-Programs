



	#include<iostream>
	using namespace std;


	class Integer
	{
		private:
			int number;

		public:


			Integer(int v)
			{
				number = v;
			}
		
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
		Integer n=12;

		n.put();
		
		return 0;
	}
