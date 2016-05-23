





	#include<iostream>

	using namespace std;


	int main()	
	{
		int x = 5;
		int &y = x;







		cout<<"X : "<<x<<"\n";      //  5

		cout<<"Y : "<<y<<"\n";      // 5


		x = x * x;

		
		cout<<"X : "<<x<<"\n";     // 25

		cout<<"Y : "<<y<<"\n";     // 25


		y = 100;


		cout<<"X : "<<x<<"\n";     // 100

		cout<<"Y : "<<y<<"\n";     //  100




		cout<<"Address of x : "<<&x<<"\n";      //  ?
		cout<<"Address of y : "<<&y<<"\n";     //  ?




		return 0;
	}


