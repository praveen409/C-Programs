





	#include<stdio.h>


	struct Book
	{
		int code;
		char title[20];
		char author[20];
		int price;
	};


	int main()
	{
		struct Book b1;

		printf("Enter the code : ");
		scanf("%d", &b1.code);


		printf("Enter the title : ");
		scanf("%s", b1.title);

		printf("Enter the author : ");
		scanf("%s", b1.author);


		printf("Enter the price  : ");
		scanf("%d", &b1.price);



		printf("%d %s %s %d\n", b1.code, b1.title, b1.author, b1.price);

		return 0;
	}
