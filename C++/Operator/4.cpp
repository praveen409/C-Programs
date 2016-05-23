
	#include<iostream>
	using namespace std;

	class Time
	{
		int hour, minute, second;

		public:

			Time() {}

			Time(int h, int m, int s)
			{
				hour = h; minute = m; second = s;
			}

			friend Time operator + (Time &x, Time &y);
                       
		       	friend ostream& operator << (ostream &out, Time &t);

	};


	Time operator + (Time &x, Time &y)
	{
		Time z;
		z.hour = x.hour + y.hour;
		z.minute = x.minute + y.minute;
		z.second = x.second + y.second;
		return z;
	}

	ostream& operator << (ostream &out, Time &t)
	{
		out<<t.hour<<":"<<t.minute<<":"<<t.second<<"\n";
		return out;
	}


	int main()
	{
		Time t1(9, 23, 34), t2(2, 32, 12);
		Time t3;

		t3 = t1 + t2;


		cout << t1; 
		cout << t2;
		cout << t3;
	

		return 0;
	}
