



	/*
	Function Overloading:
	
		Two or more functions can have the same name the difference
	between them should be the type or the number of arguments.
	*/



	#include<iostream>
	using namespace std;

	void printSeries();
	void printSeries(int n);
	void printSeries(int m, int n);

	int main()
	{
		printSeries(90, 100);

		return 0;
	}

	

	void printSeries()
	{
		int i;

		i = 1;
		while (i <= 10)
		{
			cout<<i<<" ";

			i++;
		}

		cout<<"\n";
	}
	
	void printSeries(int n)
	{
		int i;

		i = 1;
		while (i <= n)
		{
			cout<<i<<" ";

			i++;
		}

		cout<<"\n";
	}


	void printSeries(int m, int n)
	{
		int i;

		i = m;

		while(i <= n)
		{
			cout<<i<<" ";
			i++;
		}

		cout<<"\n";
		
	}

