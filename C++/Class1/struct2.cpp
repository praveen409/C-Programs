





	#include<iostream>
	using namespace std;


	struct Account
	{
		char number[20];
		char name[20];
		int balance;
	};


	int main(int argc, char *argv[])
	{
		Account a1;


		cout<<"Enter the account number : ";
		cin>>a1.number;

		cout<<"Enter the name : ";
		cin>>a1.name;

		cout<<"Enter the balance : ";
		cin>>a1.balance;



		cout<<"Account Number	: "<<a1.number<<endl;
		cout<<"Name		: "<<a1.name<<endl;
		cout<<"Balance		: "<<a1.balance<<endl;


		return 0;
	
	}
