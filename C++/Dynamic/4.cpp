


	#include<iostream>
	#include<cstring>
	using namespace std;

	struct Book
	{
		private:
			char title[20];
			char author[20];
			float price;


		public:

			void setBook(char t[], char a[], float p)
			{
				strcpy(title, t);
				strcpy(author, a);
				price = p;
			}	

			void putBook()
			{
				cout<<title<<" "<<author<<" "<<price<<"\n";
			}

	};


	int main()
	{
		
		Book *ptr;



		ptr = new Book;
	
		ptr -> setBook("C++", "Rohit", 200.45);
		ptr -> putBook();

		
		delete ptr;
		ptr = NULL;

		


		return 0;
	}
