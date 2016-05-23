






	#include<stdio.h>

	struct Book
	{
		char title[25];
		char author[25];
		float price;
	};



	int main()
	{
		struct Book b;


		printf("Enter the title : ");
		scanf("%s", b.title);


		printf("Enter the author : ");
		scanf("%s", b.author);


		printf("Enter the price : ");
		scanf("%f", &b.price);



		printf("%s %s %f\n", b.title, b.author, b.price);


		return 0;
	}
