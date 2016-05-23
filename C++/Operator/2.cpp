

	#include<iostream>
	using namespace std;

	class Array
	{
		private:
			int size;
			int *ptr;

		public:
			Array(int size);
			~Array();
		
			void getElements();
			void putElements();
	
			
			friend Array &operator+(Array &x, Array &y);

			int operator[] (int index)
			{
				return ptr[index];
			}
	};


	Array& operator+(Array &x, Array &y)
	{
		cout<<"+ operator is overloaded...\n";
		static Array z(3);
		
		for(int i = 0; i < z.size; i++)		
		{
			z.ptr[i] = x.ptr[i] + y.ptr[i];
		}

		return z;
	}


	Array :: Array(int size)
	{
		this -> size = size;
		ptr = new int[size];
	}

	Array :: ~Array()
	{
		delete[] ptr;
	}


	void Array :: getElements()
	{
		int i;

		cout<<"Input "<<size<<" elements : ";
		for(i = 0; i < size; i++)
		{
			cin>>ptr[i];
		}
	}


	void Array :: putElements()
	{
		int i;

		cout<<"The "<<size<<" element are : \n";

		for(i = 0; i < size; i++)
		{
			cout<<ptr[i]<<" ";
		}
		cout<<"\n";
	}


	int main()
	{
		Array a1(3);
		Array a2(3);
		
	

		a1.getElements();
		a2.getElements();

		a1.putElements();
		a2.putElements();



		Array &a3 = a1 + a2;

		a3.putElements();		


		int k = a1[0];

		cout<<k<<"\n";

		return 0;
	}
