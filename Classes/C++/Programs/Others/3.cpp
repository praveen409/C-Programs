

	#include<iostream>
	using namespace std;


	class Sample
	{
		public:
			void display()
			{
				cout<<"Hi I am public function....\n";
			}
	
	};


	int main()
	{
		typedef Sample Message;
		
		Message s;

		s.display();

		return 0;

	}
