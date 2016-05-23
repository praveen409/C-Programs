


	#include<stdio.h>


	//  Structs 	//
	struct Address
	{
		int doorno;
		char street[20];
		char city[20];	
	};


	struct Contact
	{
		struct Address add;
		char phone[12];
		char email[50];
	};


	struct Customer
	{
		int code;
		char name[20];
		struct Contact con;
	};
	
	// INPUT  Functions	//
	void getCustomer(struct Customer *ptr)
	{
		printf("Enter the code : ");
		scanf("%d", &ptr -> code);

		printf("Enter the name : ");
		scanf("%s", ptr -> name);

		printf("Enter the Door-No number : ");
		scanf("%d", &ptr -> con.add.doorno);

		printf("Enter the Street : ");
		scanf("%s", ptr -> con.add.street);
		
		printf("Enter the City : ");
		scanf("%s", ptr -> con.add.city);

		printf("Enter Phone No : ");
		scanf("%s", ptr -> con.phone);
		
		printf("Enter E-Mail Id : ");
		scanf("%s", ptr -> con.email);
	}

	////   OUTPUT FUNCTION //////////

	
	void printCustomer(struct Customer n)
	{
		printf("CODE		: %d\n",n.code);
		printf("NAME		: %s\n",n.name);
		printf("D/O NO		: %d\n",n.con.add.doorno);
		printf("STREET		: %s\n",n.con.add.street);
		printf("CITY		: %s\n",n.con.add.city);
		printf("PHONE NO	: %s\n",n.con.phone);
		printf("E-MAIL ID	: %s\n",n.con.email);
	
	}

	/////// The Main Function ////

	int main()
	{

		struct Customer c1;

		getCustomer(&c1);

		printf("\n");

		printCustomer(c1);

		printf("\n");

		return 0;
	}


