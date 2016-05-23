





	#include<iostream>
	using namespace std;



	class Time
	{
		private:
			int sec;
			int min;
			int hour;

		public:

			Time()  // Default Constructor
			{
			}
			

			// Parameterized Constructor
			Time(int h, int m, int s)
			{
				hour = h;
				min = m;
				sec = s;
			}

			// Copy Constructor
			Time(Time &x)
			{
			  	hour = x.hour;
				min = x.min;
				sec = x.sec;
			}
			

			void putTime()
			{
				cout<<hour<<" : "<<min<<" : "<<sec<<"\n";
			}

			

	};


	int main()
	{

		Time t1 = Time(3,23,25);

		t1.putTime();

		Time t2;

		t2.putTime();

		

		Time t3(t1);

		t3.putTime();


		return 0;
	}


	

