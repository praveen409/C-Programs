





	#include<iostream>
	using namespace std;


	struct Account
	{
		char number[20];
		char name[20];
		int balance;

		
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
		Account a1, a2;

		a1.getAccount();
		a2.getAccount();

		a1.putAccount();
		a2.putAccount();

		return 0;
	
	}
