
	#include<stdio.h>
	#include<stdlib.h>
	
	struct Node
	{
		int data;

		struct Node *link;
	};

	

	struct Node *head, *tail;



	void Create()
	{

		head = NULL;
		tail = NULL;
	}

	void showHead()
	{
		printf("Head : %d\n", head -> data);
	}

	void showTail()
	{
		printf("Tail : %d\n", tail -> data); 
	}


	void insertFirst(int v)
	{
		struct Node *temp;
		
		temp = (struct Node *)malloc(sizeof(struct Node));
		temp -> data = v;
		temp -> link = NULL;
		head = temp;
		tail = temp;

		printf("%d is insert as first node...\n", v);

	}


	void insertBegin(int v)
	{
		struct Node *temp;

		temp = (struct Node *) malloc (sizeof(struct Node));
		temp -> data = v;
		temp -> link = head;
		head = temp;


		printf("%d is inserted in Begining...\n", v);
	}


	void insertEnd(int v)
	{
		struct Node *temp;

		temp = (struct Node *)malloc(sizeof(struct Node));
		temp -> data = v;
		temp -> link = NULL;
		tail -> link = temp;
		tail = temp;
		printf("%d is inserted in ending....\n", v);

	}




	void showAll()
	{
		struct Node *cur;

		cur = head;

		printf("Currently List contains\n");

		while(cur != NULL)
		{
			printf("%d ", cur -> data);

			cur = cur -> link;
		
		}

		printf("\n");
	
	}




	void deleteBegin()
	{
		struct Node *temp;

		temp = head;

		head = head -> link;

		printf("%d is deleted....\n", temp->data);

		free(temp);

	}


	void deleteEnd()
	{
		struct Node *cur;

		cur = head;

		while( cur -> link != tail )
		{
			cur = cur -> link;
		}
			
		printf("%d is deleted...\n", tail -> data);

		free(tail);

		cur -> link = NULL;

		tail = cur;		

	}


	void insertMidAfter(int v, int x)
	{
		struct Node *cur, *temp;
		int flag = 0;

		


		cur = head;
	
		while(cur != NULL)
		{
			if(cur -> data == x)
			{
		 	 temp = (struct Node *)malloc(sizeof(struct Node));
			 temp -> data = v;

			 temp -> link = cur -> link;
			 cur -> link = temp;	
			
				flag = 1;
				break;
			}
			cur = cur -> link;
		}


		if(flag)
		{
			printf("%d is inserted after %d ...\n", v, x);
		}
		else
		{
			printf("%d is not found, unable to insert %d...\n", x, v);
		}



	}



	void deleteMid(int x)
	{
	
		struct Node *cur, *prev;
		int count = 0;


		if(x == 1)
		{
			deleteBegin();
			return;
		}



		cur = head;

		while(cur != NULL)
		{
			count++;

			if(count == x)
			{
				prev -> link = cur -> link;
				printf("%d is deleted...\n", cur -> data);
				free(cur);
			
			}

			prev = cur;
			cur = cur -> link;	
		}
		

		

	}





	int main()
	{
		int option, choice, x,v;


		printf("1. Insert.\n");
		printf("2. Delete.\n");
		printf("3. Display.\n");
		printf("4. Exit...\n");
		printf("Enter the option : ");
		scanf("%d", &option);

		switch(option)
		{

			case 1:
				printf("1. Insert Begin. \n");
				printf("2. Insert Mid.\n");
				printf("3. Insert End.\n");

				printf("Enter the option : ");
				scanf("%d", &choice);

				switch(choice)
				{	
					case 1:
						printf("Enter the data to be inserted in the begining... : ");
	scanf("%d", &x);
						insertBegin(x);
						break;

					case 2:
						printf("enter the data to be inserted in the middle... :");
	scanf("%d", &x);
						insertMidAfter(v,x);
						break;
					
					


				}

		Create();
		}

		return 0;
	}
