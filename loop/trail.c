


	#include<stdio.h>

	void add();
	void sub();
	void mul();
	void div();
	void modulo();

	int a,b,c,i;

	
	int main()
	{


	printf("\n\tA= ");
	scanf("%d",&a);

	printf("\n\tB= ");
	scanf("%d",&b);
	
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Modulo Division\nEnter your choice:");
	scanf("%d",&i);
	switch (i)
		{
		case 1: add();
			printf("C=%d\n", c);
			 break;
		case 2: sub();
			printf("C=%d\n", c);
			 break;
		case 3: mul();
			printf("C=%d\n", c);
			 break;
		case 4: div();
			printf("C=%d\n", c);
			 break;	
		case 5: modulo();
			printf("C=%d\n", c);
			 break;
		default: printf("Entered Rong Input\n");
		}
		

	return 0;
	}


	void add()
	{
	c=a+b;
	}

	void sub()
	{
	c=a-b;	
	}

	void mul()
	{
	c=a*b;
	}

	void div()
	{
	c=a/b;
	}

	void modulo()
	{
	c=a%b;
	}
	



	
