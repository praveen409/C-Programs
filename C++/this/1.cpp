




//	this is a in-built pointer only present in member function
//	and which points to address of the current object.





	#include<iostream>
	#include<cstring>

	using namespace std;


	class Product
	{
		private:
			int code;
			char name[20];


		public:

			Product(int code, char name[])
			{
				this -> code = code;
				strcpy(this->name, name);
			}


			void printProductDetails()
			{
			   cout <<"Code = "<<this->code<<" "
				<<"Name = "<<this->name<<"\n";
			}
	};


	int main()
	{
		Product p1(10, "Keyboard");
		Product p2(14, "Mouse");

		p1.printProductDetails();

		p2.printProductDetails();

		return 0;
	}
