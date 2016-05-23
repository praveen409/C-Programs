
	#include<iostream>
	using namespace std;



	class Time
	{
		private:
			int sec;
			int min;
			int hour;

		public:


			void setTime()
			{
				hour = 0; min = 0; sec = 0;
			}

			void setTime(int h, int m, int s)
			{
				sec = s;
				min = m;
				hour= h;

			}


			void putTime()
			{
				cout<<hour<<" : "<<min<<" : "<<sec<<endl;
			}

			void setHour(int h)
			{
				hour = h;
			}


			Time()
			{
				hour = 0;
				min = 0;
				sec = 0;
			}
			
			Time(int h, int m, int s)
			{
				sec = s;
				min = m;
				hour= h;

			}




	};


	int main()
	{
		Time t1;


		t1.setTime();

		t1.putTime();


		Time t2;

		t2.setTime(12, 55, 34);

		t2.putTime();

		

		Time t3;

		t3.putTime();


		Time t4(1, 0, 25);

		t4.putTime();


		return 0;
	}
