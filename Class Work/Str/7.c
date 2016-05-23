



	struct Address
	{
		int doorno;
		char street[20];
		char area[20];
		char city[20];
		char pincode[10];
	};


	union Contact
	{
		char phone[20];
		struct Address add;
		char email[20];

	};



	struct Customer
	{
		int code;
		char name[20];
		struct Contact con;
	};


	int main()
	{

