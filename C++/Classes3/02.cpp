





	#include<iostream>
	#include<cstring>
	using namespace std;


	class Account
	{
		private:
			static int n;
			static int count;
			int number;
			char *name;
			int balance;
			static char bank_name[50];
					

		public:
			Account();

			Account(char *, int);

			void deposit(int);

			void withdraw(int);

			void showBalance();
	
			~Account();		

			void display();


			static void numberOfAccounts();

	};



	

	
	


	char Account::bank_name[50] = "ISM International Bank";

	int Account :: n = 1000;

	int Account :: count = 0;



	void Account :: numberOfAccounts()
	{
			cout<<"Number of Account : "<<count<<"\n";
	}




	void Account :: display()
	{
		cout<<"\n\n\n===========================================\n";
		cout<<"Bank Name      : "<<bank_name<<"\n";
		cout<<"Account Number : "<<number<<"\n";
		cout<<"Name	      : "<<name<<"\n";
		cout<<"Balance	      : "<<balance<<"\n";
		cout<<"===========================================\n";
	}




			Account :: Account()
			{
				cout<<"Account is created!...\n";
			}



			Account :: Account(char *m, int b)
			{

				count = count + 1;

				n = n + 1;
				number = n;
				
				name = new char[strlen(m) + 1];

				strcpy(name, m);
				balance = b;

				cout<<name<<" account is created!....\n";	
			}


	
			void Account::deposit(int amount)
			{
				balance = balance + amount;
				cout<<name<<" is deposited "<<amount<<"\n";
			}


			void Account::withdraw(int amount)
			{

				if(balance >= amount)
				{
				balance = balance - amount;
	
				cout<<amount<<" is withdrawn by "<<name<<"\n";
				}
				else
				{
			  cout<<amount<<" is not there in the account.....\n";
				}
			}


			void Account::showBalance()
			{
				cout<<"Current balance of "<<name
				    <<"is "<<balance<<"\n";
			}


			// Destructor
			Account :: ~Account()
			{
				cout<<name<<" account is deleted....\n";
				delete[] name;
			}

	










	int main(int argc, char *argv[])
	{

		Account a1("Syed", 9000);

		{
			Account a2= Account("Vinoth", 7000);
		
			a2.display();
		}
	


		a1.display();


		Account a3("Mohan", 1000);

		a3.display();


		Account :: numberOfAccounts();

		return 0;
	}
