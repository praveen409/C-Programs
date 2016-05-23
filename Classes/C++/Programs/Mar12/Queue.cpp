

	// Container Class.... 

	#include<iostream>
	using namespace std;

	



	class Queue
	{
		private:
			int arr[5];

			int front, rear;

		public:
	
			Queue()
			{
				front = rear = -1;

				cout<<"Queue is created....!\n";
			}


			void enQueue(int element)
			{
				rear = rear + 1;

				arr[ rear ] = element;

				cout<<element<<" enqueued successfully...!\n";
			}

			void deQueue()
			{
				int element;

				front = front + 1;
				
				element = arr[ front ];
		
				cout<<element<<" dequeued successfully....\n";
			}
				
			void display()
			{
				int item;

				cout<<"Elements in the queue currently : ";

				item = front + 1;

				while( item <= rear )
				{
					cout<<arr[item]<<" ";

					item = item + 1;
				}

				cout<<"\n";
			}	
		

			
	};


	int main()
	{
		Queue q1;

	
		q1.enQueue(10);
		q1.enQueue(20);
		q1.enQueue(30);

		q1.display();

		q1.deQueue();

		q1.display();
		

		return 0;
	}
