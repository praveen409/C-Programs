

	#include<iostream>
	#include<cstring>
	using namespace std;
	
	class Person
	{
		private:
			char name[20];
			int age;
			char gender;

		public:
			void getPerson(char n[],int a,char g)
			{
				strcpy(name,n);
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

	class Student : public Person
	{
		private:
			int id;
			char qualif[20];
			char email[20];
		public:
			void getStudent(char n[],int a,char g,int i,char qual[],char ema[])
			{
				getPerson(n,a,g);
				id = i;
				strcpy(qualif,qual);
				strcpy(email,ema);
			}

			void putStudent()
			{
				putPerson();
				cout<<"ID	: "<<id<<endl;
				cout<<"qualif	: "<<qualif<<endl;
				cout<<"Email	: "<<email<<endl;
			}
	};


	int main()
	{
		Student s1;
		
		s1.getStudent("Theja", 23, 'M', 473, "B.Tech", "theja473@gmail.com");
		s1.putStudent();
		
	return 0;
	}
