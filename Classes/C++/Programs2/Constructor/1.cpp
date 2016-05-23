



	#include<iostream>
	using namespace std;

	class TEST
	{
		public:


			TEST()
			{
				cout<<"Object is created...\n";
			}


			~TEST()
			{
				cout<<"Object is destroyed....\n";
			}



			void display()
			{

				cout<<"Object is working....\n";
			}
	};




	int main()
	{
		
		TEST t;
		

		
		t.display();

		return 0;

	}

