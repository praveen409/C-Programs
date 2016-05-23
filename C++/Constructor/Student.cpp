




	#include<iostream>
	using namespace std;



	class Student
	{	
		private:
			char name[20];
			int marks[5];
			int total;
			float avg;
			char grade;
			char result[5];
			
		public:
			Student (char *n, int a, int b, int c, int d, int e)
			{
				strcpy(name, n);
				marks[0] = a;
				marks[1] = b;
				marks[2] = c;
				marks[3] = d;
				marks[4] = e;
			}
			
			Student(char *n, int *ptr)
			{
				int i;

				strcpy(name, n);

				for(i = 0; i < 5; i++)
					marks[i] = *(ptr + i);

			}			





			void getInfo();
			char *getName();	
			int getTotal();
			float getAverage();


	};


	void Student :: getInfo()
	{
		cout<<"Enter the name : "; cin>>name;
		
		cout<<"Enter the marks : ";
		for(int i=0; i<5; i++)
		 cin>>marks[i];

	}

	char* Student :: getName()
	{
		return name;
	}

	int Student :: getTotal()
	{
		int i;

		total = 0;
		for(i=0; i<5; i++)
			total = total + marks[i];


		return total;
			
	}

	float Student :: getAverage()
	{	
		return (float)total / 5;	
	}
	





	int main()
	{
		int a[] = {12,23,34,45,56};
		Student s("ABC", a);


		//s.getInfo();

		cout<<"Name	: "<<s.getName()<<"\n";
		cout<<"Total	: "<<s.getTotal()<<"\n";
		cout<<"Average  : "<<s.getAverage()<<"\n";
		//cout<<"Grade	: "<<s.getGrade()<<"\n";
		//cout<<"Result	: "<<s.getResult()<<"\n";






		return 0;

	}
