




	#include<iostream>
	using namespace std;


	class Person
	{
		private:
			char name[20];
			int age;
			char gender;
			char phone[12];

		public:



		friend ostream& operator << (ostream &put, Person &x);
		friend istream& operator >> (istream &get, Person &x);

	};

		ostream& operator << (ostream &put, Person &x)
		{
				put<<"Name : "<<x.name<<"\n";
				put<<"Age  : "<<x.age<<"\n";
				put<<"Gender: "<<x.gender<<"\n";
				put<<"Phone: "<<x.phone<<"\n";
				return put;
		}
	
		istream& operator >> (istream &get, Person &x)
		{

				cout<<"Enter the name : ";
				get>>x.name;

				cout<<"Enter the age : ";
				get>>x.age;
	
				cout<<"Enter the Gender : ";
				get>>x.gender;
	
				cout<<"Enter the phone : ";
				get>>x.phone;
			
				return get;
		}




	int main()
	{
		Person p1;

		cin >> p1;
	

		cout << p1;


		return 0;
	}
