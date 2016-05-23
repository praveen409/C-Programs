





	#include<iostream>

	using namespace std;


	class Sample
	{
		private:
			int number;

		public:
			Sample(int number)
			{
				this -> number = number;
			}

			void show()
			{
				cout<<number<<"\n";
			}


			friend void print(Sample &x);
	};

	

	void print(Sample &x)
	{
		cout<<x.number<<"\n";
	}




	int main(int argc, char *argv[])
	{
		Sample s1(10);

		s1.show();


		print(s1);


		return 0;
	}




























