

	// Container Class.... 

	#include<iostream>
	using namespace std;


	class Passenger
	{
		private:
			int code;
			char name[20];
			char origin[20];
			char destination[20];

		public:

			Passenger()
			{

			}

			Passenger(int code, char *name, char *origin, char *destination)
			{

				this->code = code;
				strcpy(this->name, name);
				strcpy(this->origin, origin);
				strcpy(this->destination, destination);

			}
		

			void showPassenger()
			{
		cout<<code<<" "<<name<<" "<<origin<<" "<<destination<<"\n";
			}


			char *getName()
			{
				return name;
			}
			

	};




















	class Queue
	{
		private:
			Passenger arr[5];

			int front, rear;

		public:
	
			Queue()
			{
				front = rear = -1;

				cout<<"Queue is created....!\n";
			}


			void enQueue(Passenger& element)
			{
				rear = rear + 1;

				arr[ rear ] = element;

				

				cout<<element.getName()<<" enqueued successfully...!\n";
			}

			void deQueue()
			{
				Passenger element;

				front = front + 1;
				
				element = arr[ front ];
		
				cout<<element.getName()<<" dequeued successfully....\n";
			}
				
			void display()
			{
				int item;

				cout<<"Elements in the queue currently : \n";
				cout<<"==================================\n";

				item = front + 1;

				while( item <= rear )
				{
					arr[item].showPassenger();

					item = item + 1;
				}

				
				cout<<"===================================\n";
			}	
		

			
	};


	int main()
	{
		Passenger p1(1, "Balamurugan", "Chennai", "Dubai");
		Passenger p2(2, "Kashif", "Chennai", "Banglore");
		Passenger p3(3, "Varatharajan", "Chennai", "Delhi");

		Queue q1;

	
		q1.enQueue(p1);
		q1.enQueue(p2);
		q1.enQueue(p3);

		q1.display();

		q1.deQueue();

		q1.display();
		

		return 0;
	}
