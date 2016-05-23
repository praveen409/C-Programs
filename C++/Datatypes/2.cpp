





	#include<iostream>

	using namespace std;


	int main()
	{
		bool result;

		int a = 10, b = 20;

		result = (a >= b);

		cout<<"Result = "<<result<<"\n";

		if(result)
		{
			cout<<a<<" is bigger....\n";	
		}
		else
		{
			cout<<b<<" is bigger.....\n";
		}

		

		cout<<"Size of the bool datatype : "<<sizeof(bool)<<"\n";

		return 0;
	}
