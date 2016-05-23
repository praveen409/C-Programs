

		

	#include<iostream>
	using namespace std;




	class Integer
	{
		private:

			short i;

		public:
			Integer()
			{
				i = 0;
			}

			Integer(int k)
			{
				i = k;
			}

			void set(int k)
			{
				i = k;
			}

			int square()
			{
				return i * i;
			}

			void show()
			{
				cout<<i<<"\n";
			}

	};
	




	int main()
	{
		int x=6;

		Integer a = 9; //Integer(9);
	

	
		x = a.square();
		
	


		a.show();
		cout<<"X	: "<<x<<"\n";
		

		return 0;

	}
