



	#include<stdio.h>

	struct Customer
	{
		int code;
		char name[20];
		char phone[12];
	};



	void getCustomer(struct Customer *ptr)
	{
		printf("Enter the code : ");
		scanf("%d", &ptr -> code);

		printf("Enter the name : ");
		scanf("%s", ptr -> name);

		printf("Enter the phone number : ");
		scanf("%s", ptr -> phone);
	}


	void putCustomer(struct Customer x)
	{
		printf("Code		: %d\n", x.code);
		printf("Name		: %s\n", x.name);
		printf("Phone		: %s\n", x.phone);
	}




	int main()
	{
		struct Customer c1, c2;



		getCustomer(&c1);            

		getCustomer(&c2);



		putCustomer(c1);

		putCustomer(c2);



		return 0;
	}
