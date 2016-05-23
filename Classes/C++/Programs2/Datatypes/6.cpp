





	#include<iostream>

	using namespace std;


	int main()	
	{
		int x = 5;
		int &y = x;


		cout<<"X : "<<x<<"\n";

		cout<<"Y : "<<y<<"\n";


		x = x * x;

		
		cout<<"X : "<<x<<"\n";

		cout<<"Y : "<<y<<"\n";


		y = 100;


		cout<<"X : "<<x<<"\n";

		cout<<"Y : "<<y<<"\n";




		cout<<"Address of x : "<<&x<<"\n";
		cout<<"Address of y : "<<&y<<"\n";




		return 0;
	}


