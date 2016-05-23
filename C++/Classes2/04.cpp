




	#include "myDate"

	using namespace myDate;


	int main(int argc, char *argv[])
	{
		Date d1, d2;


		d1.setDate();

		d2.setDate(22, "August", 2014);



		d1.putDate();  // 01. January. 1970

		d2.putDate();  // 22. August. 2014


		return 0;
	}
