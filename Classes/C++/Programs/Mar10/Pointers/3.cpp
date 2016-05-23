

	#include<iostream>
	using namespace std;


	class String
	{
		private:
			char *str;


		public:

			String(char *s)
			{

				int size = strlen(s) + 1;

				str = new char[size];

				strcpy(str, s);


			}


			void show()
			{
				cout<<str<<"\n";
			}


			~String()
			{
				delete[] str;
			}

	};


	int main()
	{	

		String s1("Programming");


		s1.show();


		return 0;
	}
