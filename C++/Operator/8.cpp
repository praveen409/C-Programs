




	#include<iostream>
	#include<cstring>

	using namespace std;


	class Book
	{
		private:
			char title[20];
			char author[20];
			float price;


		public:

			friend ostream& operator << (ostream &cout, Book &x);
			friend istream& operator >> (istream &cin, Book &x);

	};


	ostream& operator << ( ostream &cout, Book &x)
	{
		cout<<x.title<<" "<<x.author<<" "<<x.price<<"\n";
		return cout;
	}



	istream& operator >> (istream &cin, Book &x)
	{
		cout<<"enter the title : ";
		cin>>x.title;

		cout<<"Enter the Author : ";
		cin>>x.author;
		
		cout<<"Enter the price : ";
		cin>>x.price;

		return cin;
	}





	int main()
	{


		Book obj1, obj2;

		cin>>obj1;
		cin>>obj2;


		cout << obj1;
		cout << obj2;

		return 0;
	}
