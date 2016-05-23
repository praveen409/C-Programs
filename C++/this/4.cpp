






	#include<iostream>
	using namespace std;


	class Sample
	{
		private:
			int x;
			int y;	



		public:
			void display()
			{
				cout<<"this: "<<this<<"\n";
			}
		
	};




	int main(int argc, char *argv[])
	{
		Sample s;

		Sample *ptr;


		cout<<"Size Of the Object : "<<sizeof(s)<<"\n";

		cout<<"Address of the Object : "<<&s<<"\n";

		s.display();


		ptr = &s;

		cout<<"Ptr		: "<<ptr<<"\n";

		return 0;
	}
