




	#include<iostream>
	#include<cstring>
	using namespace std;


	class Account
	{
		private:
			int number;
			char name[20];
			int balance;
			char phone[20];

		public:

			void setDetails(int a, char *b, int c, char *d)
			{
				number = a;
				strcpy(name, b);
				balance = c;
				strcpy(phone, d);
			}

			int getBalance()
			{
				return balance;
			}

			void deposit(int amount)
			{
				balance = balance + amount;
				cout<<amount<<" is deposited.....\n";
			}

			void withdraw(int amount)
			{
				balance = balance - amount;
				cout<<amount<<" is withdrawn...\n";
			}


			void showDetails()
			{
				cout<<"Account Number : "<<number<<"\n";
				cout<<"Name	      : "<<name<<"\n";
				cout<<"Balance	      : "<<balance<<"\n";
				cout<<"Phone Number   : "<<phone<<"\n";
			}

			void setPhone(char *p)
			{
				strcpy(phone, p);
			}
			
	};

	




	int main()
	{
		Account acc1;


		acc1.setDetails(1234, "Avinash", 45300, "9223243546");


		cout<<"Balance : "<<acc1.getBalance()<<"\n";



		acc1.deposit( 5300 );


		cout<<"Balance : "<<acc1.getBalance()<<"\n";

		
		acc1.withdraw(6000);

		
		cout<<"Balance : "<<acc1.getBalance()<<"\n";

		acc1.showDetails();



		acc1.setPhone("9002165657");

		acc1.showDetails();

			



		return 0;
	}



