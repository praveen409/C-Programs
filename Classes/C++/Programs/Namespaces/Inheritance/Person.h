




	class Person
	{
		private:
			char name[20];
			int age;
			char gender;

		public:
			void setPerson(char *n, int a, char g)
			{
				strcpy(name, n);
				age = a;
				gender = g;
			}

			void putPerson()
			{

				cout<<"Name	: "<<name<<endl;
				cout<<"Age	: "<<age<<endl;
				cout<<"Gender	: "<<gender<<endl;
			}
	};






















