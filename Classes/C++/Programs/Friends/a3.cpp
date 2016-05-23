




	#include "myDate.h"
	#include "myTime.h"


	void showNow(Date &obj1, Time &obj2)
	{
		cout<<obj1.day<<"/"
                    <<obj1.month<<"/"
                    <<obj1.year<<" "
		    <<obj2.hour<<" : "
                    <<obj2.minute<<" : "
                    <<obj2.second<<"\n";
			
	}




	int main()
	{
		Date d1(31, "March", 2014);
		Time t1(2, 23, 44);


		showNow(d1, t1);


		return 0;		
	}
