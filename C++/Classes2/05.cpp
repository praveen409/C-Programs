




	#include<iostream>
	#include<cstring>
	using namespace std;


	namespace myStudent
	{
		class Student
		{
			private:

				char name[100];
				char Quali[100];
				char email[100];
		
			public:
				void set(char str1[],char str2[],char str3[])
				{
				strcpy(name,str1);
				strcpy(Quali,str2);
				strcpy(email,str3);
				}
				
				void print()
				{
				cout<<"\n"<<name<<" "<<Quali<<" "<<email<<"\n\n";
				}

				void setName(char str4[])
				{
				strcpy(name,str4);
				}
				
				void setQualification(char str5[])
				{
				strcpy(Quali,str5);
				}
				
				void setEmail(char str6[])
				{
				strcpy(email,str6);
				}

		};

	}


	int main(int argc, char *argv[])
	{
		myStudent::Student s1,s2;

		s1.set("Rahul", "B.E", "rahul@gmail.com");

		s1.print();

		s2.setName("Vinoth");

		s2.setQualification("B.E");

		s2.setEmail("vinoth@yahoo.com");

		s2.print();
		

		return 0;
	}


