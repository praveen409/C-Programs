





	#include<iostream>
	using namespace std;


	class Time;

	class Date
	{
		private:
			int day;
			char month[20];
			int year;

		public:

			Date(int day, char *month, int year)
			{
				this -> day = day;
				strcpy(this -> month, month);
				this -> year = year;
			}

			friend void fun(Date &x, Time &y);

	};


	class Time
	{
		private:
			int hour, minute, second;
		public:
			Time(int hour, int minute, int second)
			{	
				this -> hour = hour;
				this -> minute = minute;	
				this -> second = second;
			}

			friend void fun(Date &x, Time &y);
	};



	void fun(Date &x, Time &y)
	{
	 	cout<<x.day<<"/"
		    <<x.month<<"/"
		    <<x.year<<"\n "
		    <<y.hour<<":"
		    <<y.minute<<":"
		    <<y.second<<"\n";
				

	}
	




	int main()
	{
		Date d1(19, "May", 2014);
		Time t1(12, 23, 34);

	
		fun(d1, t1);


		return 0;
	}
