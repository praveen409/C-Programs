





	#include<stdio.h>


	int Queue[5];

	int front, rear;



	void Create()
	{
		front = -1;
		rear = -1;
		printf("Queue is created.....\n");
	}



	void enQueue(int data)
	{
		rear = rear + 1;
		Queue[rear] = data;
		printf("%d is enqueued...........\n", data);
	}


	void display()
	{
		int index;

		index = front + 1;

		printf("Queue Contains : ");

		while(index <= rear)
		{
			printf("%d ", Queue[index]);

			index++;
		} 

		printf("\n");
	}



	void deQueue()
	{
		int temp;

		front = front + 1;

		temp = Queue[front];

		printf("%d is deQueued....\n", temp);
	}


	int main()
	{
		Create();

		
		enQueue(90);
		enQueue(45);
		enQueue(89);
		enQueue(23);
		enQueue(28);




		display();



		deQueue();

		display();


		deQueue();

		display();




		return 0;
	}

