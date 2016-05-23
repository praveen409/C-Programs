



	#include<iostream>
	#include<ctime>
	#include<cstdlib>


	using namespace std;

	int main()
	{
		int i, j;
		int n;

		cout<<"Enter the number : ";
		cin>>n;

		srand(n);


		for(i=1; i<=10; i++)
		{
			j = rand()%5;
			cout<<j<<"\n";
		}
		
		return 0;

		
	}
