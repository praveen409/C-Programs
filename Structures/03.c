






	#include<stdio.h>

	struct Book
	{
		char title[25];
		char author[25];
		float price;
	};



	int main()
	{
		struct Book b[5];
		int i;

		for(i = 0; i < 3; i++)
		{
			printf("Enter the title : ");
			scanf("%s", b[i].title);


			printf("Enter the author : ");
			scanf("%s", b[i].author);

	
			printf("Enter the price : ");
			scanf("%f", &b[i].price);
		}



		for(i=0; i<3; i++)
		{
		 printf("%s %s %f\n", b[i].title, b[i].author, b[i].price);
		}

		return 0;
	}
