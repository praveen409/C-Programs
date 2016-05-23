





	#include<iostream>
	using namespace std;


	struct Account
	{
	   private:
		char number[20];
		char name[20];
		int balance;

		
	   public:
		void getAccount()
		{
			cout<<"Enter the account number : ";
			cin>>number;

			cout<<"Enter the name : ";
			cin>>name;

			cout<<"Enter the balance : ";
			cin>>balance;

		}


		void putAccount()
		{
			cout<<"Account Number	: "<<number<<endl;
			cout<<"Name		: "<<name<<endl;
			cout<<"Balance		: "<<balance<<endl;
		}



	};


	int main()
	{
		Account a1;

		a1.getAccount();


		// a1.balance = 0;    Error - is private


		a1.putAccount();

		return 0;
	
	}
