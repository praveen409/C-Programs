



	#include<stdio.h>
	#include<stdlib.h>

	struct Node
	{
		struct Node *left;

		int data;
		
		struct Node *right;
	};

	
	struct Node *root;


	void create()
	{
		root = NULL;
		
		printf("Tree is created!....\n");

	}


	struct Node *insert(struct Node *temp, int value)
	{
			
		
		if(temp == NULL)
		{
			temp = (struct Node *) malloc ( sizeof(struct Node));


			temp -> data = value;
		
			temp -> left = NULL;
			
			temp -> right = NULL;

			printf("%d is inserted...\n", value);

		}		
		else if(temp -> data < value)
		{
			temp -> right = insert(temp -> right, value);
		}
		else if(temp -> data > value)
		{
			temp -> left = insert(temp -> left, value);
		}
		else
		{
			printf("%d is already exist...\n", value);
		}



		return temp;
	}


	void displayRoot(struct Node *temp)
	{
		printf("%d is the root....\n", temp -> data);
	}


	void inOrderDisplay(struct Node *temp)
	{

		if(temp != NULL)
		{
			inOrderDisplay(temp->left);
			printf("%d ", temp -> data);
			inOrderDisplay(temp->right);
		}
	}


	int getMax(struct Node *temp)
	{
		while(temp -> right != NULL)
		{
			temp = temp -> right;
		}

		return temp -> data;
	}
	
	int getMinRec(struct Node *temp)
	{
		if(temp -> left != NULL)
		{
			return getMinRec(temp -> left);
		}
		return temp->data;
	}

	void displayAllLeafs(struct Node *temp)
	{
		if(temp!=NULL)
		{
			if(temp -> left == NULL && temp -> right == NULL)
			{
				printf("%d is leaf...\n", temp -> data);
			}
			displayAllLeafs(temp->left);
			displayAllLeafs(temp->right);
		}	
	}




	int main()
	{

		create();

		root = insert(root, 10);
	
		displayRoot(root);

		root = insert(root, 20);
		root = insert(root, 6);
		root = insert(root, 25);
		root = insert(root, 67);
		root = insert(root, 45);
		root = insert(root, 3);
		root = insert(root, 5);

		inOrderDisplay(root);
		printf("\n");


		//printf("%d is maximum..\n", getMax(root));
		//printf("%d is maximum..\n", getMaxRec(root));
		
		//printf("%d is minimum...\n", getMinRec(root));
		//printf("%d is minimum...\n", getMin(root));
		

		/*if(find(root, 4))
		{
			printf("%d is found...\n", 4);
		}
		else
		{
			printf("%d is not found...\n", 4);
		}*/



		//displayAllLeafs(root);

		//displayChilds(25);

		//displayParent(25);

		//displaySiblings(20);

		displayPath(25);


		return 0;
	}



















