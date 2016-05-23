






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



	int main()
	{

		struct Customer c1;

		getCustomer(&c1);

		printCustomer(c1);

		return 0;
	}


