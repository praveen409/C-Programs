






	#include<stdio.h>


	int Stack[5];
	int top;


	void Create()
	{
		top = -1;
		printf("Stack is created...!\n");
	}


	void push(int value)
	{
		top = top + 1;
		Stack[top] = value;
		printf("%d is pushed...\n", value);
	}

	void pop()
	{
		int temp;

		if(top == -1)
		{	
			printf("Stack is empty!...\n");

		}
		else
		{
	 	 temp = Stack[top];
		 top = top - 1;
		 printf("%d is poped....\n", temp);
		}
	}


	void display()
	{
		int i;

		printf("Stack contains : ");

		for(i = top; i >= 0; i--)
		{
			printf("%d ", Stack[i]);
		}

		printf("\n");
	}


	int main()
	{
		Create();

		pop();

		push(10);

		push(20);

		push(30);

		display(); // 30 20 10

		pop();

		display(); // 20 10
		
		push(100);

		display(); // 100 20 10
		
		pop();
		pop();
		pop();

		display();

		pop();
		


		return 0;
	}







