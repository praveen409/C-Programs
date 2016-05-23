


	#include<iostream>
	#include<string.h>
	using namespace std;


	class Student
	{
		private:
			int reg;
			char name[20];

		public:

			Student()
			{
			}

			Student(int r, char *n)
			{
				reg = r;
				strcpy(name, n);
			}

			void print()
			{
				cout<<this->reg<<"\n";
				cout<<this->name<<"\n";
			}

	};


	int main()
	{

		Student s1(123, "Bala");
		Student s2;


		s1.print();

		

		s2.print();

		return 0;
	}
