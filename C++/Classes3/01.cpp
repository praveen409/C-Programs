





	#include<iostream>
	#include<cstring>
	using namespace std;


	class Account
	{
		private:
			int number;
			char *name;
			int balance;
		

		public:
			Account();

			Account(int, char *, int);

			void deposit(int);

			void withdraw(int);

			void showBalance();
	
			~Account();		
	};






			Account :: Account()
			{
				cout<<"Account is created!...\n";
			}



			Account :: Account(int a, char *n, int b)
			{
				number = a;
				
				name = new char[strlen(n) + 1];

				strcpy(name, n);
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

		Account a1(101, "Syed", 9000);

		{
			Account a2= Account(102, "Vinoth", 7000);
		
			a2.deposit(3000);

			a2.showBalance();
		}
	
		a1.deposit(1000);
	
		a1.showBalance();
		
		a1.withdraw(16000);

		a1.showBalance();





		return 0;
	}
