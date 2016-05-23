
	#include<iostream>
	using namespace std;

	class Integer
	{
		private:
			int number;

		public:

			Integer()
			{
				number = 0;
			}

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
		Integer m=7;
		
		Integer n = Integer(10);


		m.put();
		n.put();
		
		return 0;
	}
