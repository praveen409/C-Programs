






	#include<iostream>

	using namespace std;



	namespace ism
	{
		int i = 67;
	}


	namespace abc
	{
		int i;
	}

























 
	int main()
	{
		cout<<"I value in ism namespace : "<< ism :: i <<"\n";

		abc :: i = 12;

		cout<<"I value in abc namespace : "<< abc :: i << "\n";







		
		using namespace abc;


		if( ism :: i ==  i )
		{
			cout<<"Equal....\n";
		}
		else
		{
			cout<<"Not Equal.....\n";
		}

		return 0;
	}


	
		
	

