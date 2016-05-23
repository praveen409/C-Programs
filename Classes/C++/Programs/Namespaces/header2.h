
	namespace A
	{
		const int J = 5;
	}
	
    namespace ABCD
    {

	const int WORK_HOUR = 10;

	void printAddress()
	{
		cout<<"ABCD Technology....\n";
		cout<<"XYZ Road....\n";
		cout<<"Banglore...........\n";
	}


	class Employee
	{		
		private:
			char name[20];
			int salary;

		public:

			Employee()
			{
				strcpy(name, "Balamurugan");
				salary = 60000;
			}

			void printEmployee()
			{
				cout<<"ABCD Technology \n";

				cout<<"Name	: "<<name<<"\n";

				cout<<"Salary	: "<<salary<<"\n";
			}
	};


	namespace EFG
	{
		const int DAY_IN_YEAR = 365;
	
	}


    }
