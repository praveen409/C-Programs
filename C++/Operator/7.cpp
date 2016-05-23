



	#include<iostream>
	using namespace std;



	class Sample
	{

		public:

		void operator++()
		{
			cout<<"++ operator is overloaded....\n";
		}
	};



	int main()
	{	
		Sample s;
		

		
		++s;	


		

		return 0;
	}

	
