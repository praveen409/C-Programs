

	// Container Class.... 

	#include<iostream>
	using namespace std;

	


	template <typename Type>
	class Queue
	{
		private:
			Type arr[5];

			int front, rear;

		public:
	
			Queue()
			{
				front = rear = -1;

				cout<<"Queue is created....!\n";
			}


			void enQueue(Type element)
			{
				rear = rear + 1;

				arr[ rear ] = element;

				cout<<element<<" enqueued successfully...!\n";
			}

			void deQueue()
			{
				Type element;

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
		Queue<char> q1;

	
		q1.enQueue('c');
		q1.enQueue('t');
		q1.enQueue('s');

		q1.display();

		q1.deQueue();

		q1.display();
		

		return 0;
	}
