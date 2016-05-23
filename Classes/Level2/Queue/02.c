




	#include<stdio.h>
	#include<stdlib.h>


	// Self Referential Structure
	struct Node
	{
		int data;
		struct Node *link;
	};


	typedef struct Node NODE;



	NODE *front, *rear;






	void Create()
	{

		front = NULL;
		rear = NULL;

		printf("Queue is created.....\n");
	}




	void enQueue(int data)
	{
		NODE *temp;

		temp = (NODE *) malloc (sizeof(NODE));

		temp -> data = data;
		temp -> link = NULL;


		if(rear == NULL)
		{		
			front = temp;
			rear = temp;
		}
		else
		{
			rear -> link = temp;
			rear = temp;
		}
	
		printf("%d is enQueued...\n", data);

	}



	void display()
	{

		NODE *cur;
		

		if(rear == NULL)
		{
			printf("Queue is empty....\n");
			
		}
		else
		{


			printf("Queue Contains : ");

			cur = front;

			while(cur != NULL)
			{
					printf("%d ", cur -> data);
					cur = cur -> link;
			}
	
			printf("\n");
	
		}
	}
	


	void deQueue()
	{
		NODE *temp;

		temp = front;

		front = front -> link;

		printf("%d is deQueued....\n", temp -> data);

		free(temp);


	}




	int main()
	{

		char option;
		int d;

		for(;;)
		{
		printf("Linked Queue.......\n");
		printf("-------------------\n");
		printf("C - Create         \n");
		printf("I - Insert         \n");
		printf("R - Remove         \n");
		printf("D - Display        \n");
		printf("E - Exit           \n");
		printf("Enter the option : \t");
		option = getchar();

		getchar();
		

		switch(toupper(option))
		{
			case 'C': 
					Create();
					break;
			case 'I':
				 	printf("Enter the data to insert: ");
					scanf("%d", &d);

					getchar();

					enQueue(d);
					break;
			case 'R':
					deQueue();
					break;
			case 'D':
					display();
					break;
			case 'E':
					printf("Bye...\n");
					exit(0);
					

			default:
					printf("Input Error...\n");
		}



		}


		return 0;

	}





