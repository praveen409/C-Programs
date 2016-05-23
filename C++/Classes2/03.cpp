





	#include "myTime"

	using namespace myTime;


	int main(int argc, char *argv[])
	{
		Time t1;

		t1.setTime(12, 33, 52);

		t1.printTime();

		t1.reset();

		t1.printTime();
		

		return 0;
	}
