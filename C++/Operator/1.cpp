


	#include<iostream>
	using namespace std;


	class Sample
	{

		

			friend void operator++(Sample &x);

	};



	void operator++(Sample &x)
	{
		cout<<"++ operator is overloaded....\n";
	}



	int main()
	{	
		Sample s;
				
		++s;	
		

		return 0;
	}

	
