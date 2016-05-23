


	#include "myTime.h"

	int main()
	{
		Time t1(5, 12, 56), t2(11, 34, 26), t3;


		t1.putTime();
		t2.putTime();

		t3 = t1 + t2;

		t3.putTime();

		return 0;
	}


