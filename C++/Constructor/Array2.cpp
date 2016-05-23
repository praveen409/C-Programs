





	#include<iostream>
	using namespace std;


	class Array
	{

		private:

			int size;
			int *ptr;

		public:


			Array(int n)
			{
				size = n;
				ptr = new int[size];
			}


			~Array()
			{
				delete ptr;
			}


			void getArray()
			{
				cout<<"Enter "<<size<<" elements :\n";
				for(int i=0; i<size; i++)
					cin>>ptr[i];
			}

			void putArray()
			{
				cout<<"The elements are  : \n";
				for(int i=0; i<size; i++)
					cout<<*(ptr+i)<<"\n";
			}

			int getElement(int l)
			{
				if(l >= size)
					return -1;
				else
					return ptr[l];	
			}

	};

	int main()
	{

		Array a1(5), a2(3);


		a1.getArray();
		a2.getArray();

		a1.putArray();
		a2.putArray();

	
		cout<<"Element is : "<<a2.getElement(1)<<"\n";
		cout<<"Size is	: "<<a1.getSize()<<"\n";

/*
		if(a1.find(34))
			cout<<"34 is found....\n";

		if(a2.find(2))
			cout<<"2 is not found....\n";


		cout<<"45 is present "<<a1.findCount(45)<<" times....\n";


		a2.sort();

		a2.putArray();

		a1.reverse();

		a1.putArray();

		Array a3(10);
		a3=a1.intersect(a2);
		a3.putArray();
		
*/
		return 0;

	}
