




	#include<iostream>
	using namespace std;


	class A
	{
		private:
			int a;
			int x;

		public:
			A()
			{
				x = 10;
			}

			void display()
			{
				cout<<"X  = "<<x<<"\n";
				cout<<"Address of object : "<<this<<"\n";
			}

			friend void show(A &obj);
	};




	void show(A &obj)
	{
		cout<<"X value in show function : "<<obj.x<<"\n";
		cout<<"A value in show function : "<<obj.a<<"\n";

	}




	

	int main()
	{
		A obj;

		cout<<"Size of Class A	: "<<sizeof(A)<<"\n";
		cout<<"Size of Object A : "<<sizeof(obj)<<"\n";



		cout<<"Address of obj   : "<<&obj<<"\n";

		
		obj.display();


		show(obj);


		return 0;
	}
