	#include <stdio.h>
	#include <stdlib.h>


	struct node 
	{
	 int data;
	 struct node *link;
	};	
	struct node *head, *tail;
	

	void create(int v)
	{

	  struct node *temp;
	  temp = (struct node *) malloc (sizeof(struct node));
	  temp -> data = v;
	  head = temp;
	  tail = temp;
	  tail -> link = head;
	}
	void insertbegin(int v)
	{
	 struct node *temp;
	 temp = (struct node *) malloc (sizeof(struct node));
	 temp -> data = v;
	 temp -> link = head;
	 head = temp;
	 tail -> link = head;
	// printf("%p is address of head \n", head);
	}
	void insertend(int v)
	{
	 struct node *temp;
	 temp = (struct node *) malloc (sizeof(struct node));
	 temp -> data = v;
	 tail -> link = temp;
	 tail = temp;
	 tail -> link = head;
	// printf("%d is the tail's data \n", tail-> data);
	
	}
	void insertmiddle(int v,int x)
	{
	 
	 struct node *temp,*cur;
	 cur = head;
	do 
	 {
	 if (cur -> data == x)
	{
	
	 temp = (struct node *) malloc (sizeof(struct node));
	 temp -> data = v;
	 temp -> link = cur -> link;
	 cur -> link = temp;
	}
	 cur = cur -> link;
	}
	 while(cur -> link != head);
	}
	 
	void showall()
	{
	 
	 struct node *cur;
	 cur = head;
	do
	 {
	  printf("%d ", cur -> data);
	  cur = cur -> link;
	  
	   
	 }while (cur -> link != head -> link);
	  printf("\n");
	 
	}

	int main()
	{
	 
	 create(5);
	 insertbegin(10);
	 insertbegin(1);
	 insertend(100);
	 insertend(12);
	 insertmiddle(105,100);
	 insertmiddle(205,105);
	 insertend(200);
	 printf("%p is address of head \n", head);
	 printf("%p is link of tail \n", tail -> link);
	 showall();

	 	
	return 0 ;
	}
