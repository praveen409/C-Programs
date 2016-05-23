


	#include<iostream>
	using namespace std;

	int x = 45;

	int main(int argc, char *argv[])
	{
		int x = 23;

		cout<<"Local Variable X : "<< x <<"\n";
		cout<<"Global Variable X : "<< ::x <<"\n";		

		return 0;
	}
