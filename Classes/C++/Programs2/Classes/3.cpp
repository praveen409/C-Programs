




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

			void setBook(char *t, char *a, float p)
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


		Book obj1, obj2;

		obj1.setBook("C++", "Yashwant", 298.50);
		obj2.setBook("Java", "Yashwant", 500.00);

		obj1.putBook();
		obj2.putBook();

		return 0;
	}
