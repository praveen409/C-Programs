





	#include<stdio.h>
	#include<stdlib.h>

	struct Node
	{
		int data;
		struct Node *link;
	};

	struct Node *top;


	void Create()
	{
		top = NULL;
		printf("Stack is Created!\n");
	}	


	void push(int value)
	{
		struct Node *temp;
	
		temp = (struct Node *) malloc (sizeof(struct Node));

		temp -> data = value;

		temp -> link = NULL;

		if(top == NULL)
		{
			top = temp;
		}
		else
		{
			temp -> link = top;
			top = temp;
		}

		printf("%d is pushed....!\n", value);

	}





	void pop()
	{
		struct Node *temp;

		temp = top;

		top = top -> link;

		printf("%d is poped....\n", temp -> data);

		free(temp);

	}



	void display()
	{
		struct Node *cur;

		cur = top;

		printf("Stack contains : ");

		while(cur != NULL)
		{
			printf("%d ", cur -> data);

			cur = cur -> link;

		}

		printf("\n");

	}

	



	
	int main()
	{
		Create();

		

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

		

		return 0;
	}
