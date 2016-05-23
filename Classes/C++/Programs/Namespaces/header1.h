
	namespace A
	{
		const int I = 4;
	}

	namespace XYZ
	{


	const int WORK_HOUR = 8;

	void printAddress()
	{
		cout<<"XYZ Technology....\n";
		cout<<"ABC Road....\n";
		cout<<"Chennai...........\n";
	}


	class Employee
	{		
		private:
			char name[20];
			int salary;

		public:

			Employee()
			{
				strcpy(name, "kashif");
				salary = 20000;
			}

			void printEmployee()
			{
				cout<<"XYZ Technology \n";

				cout<<"Name	: "<<name<<"\n";

				cout<<"Salary	: "<<salary<<"\n";
			}
	};

      }
