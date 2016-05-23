



	#include<iostream>
	#include<string.h>
	using namespace std;


	class Time;   // Forward Declaration

	class Date
	{
		private:

			int day;
			char month[20];
			int year;

		public:


			Date() { }

			Date(int d, char *m, int y)
			{
				day = d;
				strcpy(month, m);
				year = y;
			}

			void putDate()
			{
				cout<<day<<"/"<<month<<"/"<<year<<"\n";
			}


			friend void showNow(Date &, Time &);
	};
