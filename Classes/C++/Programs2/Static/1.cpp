
	#include "cstudent"

	
	using namespace College;


	int main()
	{
		Student::showCounts();

		Student s1 ("Varatharajan", 'M', "Chennai");
		Student s2 ("Rohit", 'M', "Chennai");



		Student s3 ( "youraj", 'M', "Chennai");
		



		
		s1.print();

		s2.print();

		s3.print();

	

		Student::showCounts();


		return 0;

	}	

