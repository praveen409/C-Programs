
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>

	struct Node
	{
		struct Node *prev;
		char data[100];
		struct Node *next;
	};

	struct Node *head, *tail;


	void Create()
	{
		head = NULL;
		tail = NULL;
	
		printf("Double Circular Linked List is Created....\n");
	}



	int isEmpty()
	{
		if(head == NULL)
			return 1;
		else	
			return 0;
	}



	void insertLastNode(char *s)
	{
		struct Node *temp;

		if(isEmpty())
		{
		 temp = (struct Node *)malloc(sizeof(struct Node));


		 strcpy(temp -> data, s);
		
		 head = temp;
		 tail = temp;

		 head -> prev = tail;
		 tail -> next = head;

		 printf("%s is inserted as first node..\n", s);
		}
		else
		{
		 temp = (struct Node *) malloc (sizeof(struct Node));
		 strcpy(temp -> data, s);
		 

		 temp -> prev = tail;
		 tail -> next = temp;
		 tail = temp;
		 head -> prev = tail; 
		 tail -> next = head;
		 
		 printf("%s is inserted as last node....\n", s);	
		}
	}
	


	void displayAllForward()
	{
		struct Node *cur;

		printf("Forward Display \n");

		cur = head;

		do
		{

			printf("%s\n", cur -> data);
			cur = cur -> next;

		}while(cur != head);

		printf("===========\n");
	}
		


	int main()
	{
		Create();

		insertLastNode("Gopal");
		insertLastNode("Syed");
		insertLastNode("Darshan");

		displayAllForward();

		return 0;
	}
