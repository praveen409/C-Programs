



	#include<stdio.h>


	union Contact
	{	
		char email[22];
		char phone[12];
	}__attribute__((__packed__));


	int main()
	{
		union Contact c1;
		int option;


		printf("Enter the option : ");
		printf("1. Email \n2. Phone");
		scanf("%d", &option);

		switch(option)
		{

		case 1:
			printf("Enter the email address : ");
			scanf("%s", c1.email);
		
		
			printf("Email  : %s\n", c1.email);
			break;

		case 2:
			printf("Enter the phone number : ");
			scanf("%s", c1.phone);
	
			printf("Phone  : %s\n", c1.phone);
			
			break;

		}


		


		return 0;
	}
