
	#include<iostream>
	#include<string.h>
	using namespace std;

	class Student
	{
		private:
			int reg;
			char name[20];

			static char college[20];

			static int count;

			static int number;

		public:

			Student(char *n)
			{
				count = count + 1;
				number = number + 1;
				reg = number;
				strcpy(name, n);	
			}

			void putStudent()
			{
				cout<<"Register Number	: "<<reg<<"\n";	
				cout<<"Name		: "<<name<<"\n";
			     cout<<"College Name: "<<college<<"\n";
			}

			static void numberOfStudent()
			{
			  cout<<"Number of Student :---> "<<count<<"\n";
			 
			}

			~Student()
			{
				count = count - 1;
			}


	};
	
	char Student :: college[] = "Madras University";
	int Student :: count;
	int Student :: number = 100;

	int main()
	{
		Student s1("Kashif");
		s1.putStudent();
		
		Student::numberOfStudent();
                
		{
		 Student s2("Balamurugan");
		 s2.putStudent();
		
		  Student::numberOfStudent();
		}

		Student::numberOfStudent();

		cout<<"Size of each student : "<<sizeof(s1)<<"\n";		        cout<<"Size of class student : "<<sizeof(Student)<<"\n";

		Student s3("Varatharajan");

		s3.putStudent();
		
		Student::numberOfStudent();

		return 0;
	}
