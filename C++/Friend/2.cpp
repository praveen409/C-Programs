





	#include<iostream>
	#include<cstring>
	using namespace std;


	class Time; // forward Declaration

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

			friend void Now(Date &x, Time &y);

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

			friend void Now(Date &x, Time &y);
	};



	void Now(Date &x, Time &y)
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
		Date d1(25, "August", 2014);
		Time t1(1, 23, 34);

	
		Now(d1, t1);


		return 0;
	}
