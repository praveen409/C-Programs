
	#include<iostream>
	using namespace std;

	class Time
	{
		private:
			int hour;
			int minute;
			int second;

		public:

			Time() {}

			Time(int h, int m, int s)
			{
				hour = h;
				minute = m;
				second = s;
			}

			void putTime()
			{
				cout<<hour<<" : "<<minute<<" : "<<second<<"\n";
			}

			friend void operator++(Time &x);

			friend void operator++(Time &x, int);

			friend Time operator+(Time &a, Time &b);

			friend ostream& operator << (ostream &out, Time &t);
	};

	void operator++(Time &x, int)
	{
			x.second++;
	}

	void operator++(Time &x)
	{
			x.second++;
	}

	Time operator+(Time &a, Time &b)
	{
		Time c;
		c.hour = a.hour + b.hour;
		c.minute = a.minute + b.minute;
		c.second = a.second + b.second;

		if(c.second > 60)
		{
			c.second = c.second % 60;
			c.minute ++;
		}
		return c;

	}

	ostream& operator << (ostream &out, Time &t)
	{
		out << t.hour << " : " << t.minute << " : " << t.second << "\n";
		return out;
	}
