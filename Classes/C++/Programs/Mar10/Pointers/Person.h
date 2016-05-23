
	#include<string.h>

	class Person
	{
			
		private:
			char name[20];
			int age;
			char gender;

		public:
	
			Person(char *name, int age, char gender)
			{
				strcpy(this->name, name);
				this->age = age;
				this->gender = gender;
			}

			void putPerson()
			{
				cout<<name<<" "<<age<<" "<<gender<<"\n";
			}	

	};
