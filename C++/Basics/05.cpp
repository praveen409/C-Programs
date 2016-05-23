


	#include<iostream>
	
	using namespace std;
	
	int main()
	{
	int n, sum = 0;
	
	cout << "Enter the N value : ";
	cin >> n;
	
	int i=0;
	
	while(i != (n+1))
		{
		if(i % 2 == 0)
			{
				sum += i;
			}
		i++;
		}

	cout << "The Sum is : "<< sum << "\n";
	
	return 0;
	}
