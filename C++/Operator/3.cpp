
	#include<iostream>
	using namespace std;

	class Time
	{
		int hour, minute, second;

		public:

			Time(int h, int m, int s)
			{
				hour = h; minute = m; second = s;
			}

			void putTime()
			{
				cout<<hour<<":"<<minute<<":"<<second<<"\n";
			}

			friend void operator++(Time &x);
			friend void operator++(Time &x, int);
	};


	void operator++(Time &x)
	{
		x.second++;

		if(x.second >= 60)
		{
			x.minute++;

			x.second = x.second % 60;
		}

		if(x.minute >= 60)
		{
			x.hour ++;
			x.minute = x.minute % 60;
		}
	}
	
	void operator++(Time &x, int)
	{
		x.second++;

		if(x.second >= 60)
		{
			x.minute++;

			x.second = x.second % 60;
		}

		if(x.minute >= 60)
		{
			x.hour ++;
			x.minute = x.minute % 60;
		}
	}


	int main()
	{
		Time t1(12, 23, 34);

		t1.putTime();

		for(int i=1; i<=30; i++)
		{
			t1++;  
		}
		

		t1.putTime();
		
		return 0;
	}
