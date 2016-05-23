
	#include "Person.h"

	class Student : public Person
	{
		private:
			char qual[20];
			int years;

		public:
		
	Student(char *n, int age, char gender, char *qual, int years)
               : Person(n, age, gender)
	{
			strcpy(this->qual, qual);
			this->years = years;
	}


	void putStudent()
	{
		putPerson();
		cout<<qual<<" "<<years<<"\n";
	}

	};
