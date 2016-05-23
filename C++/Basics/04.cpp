

	#include<iostream>
	
	using namespace std;
	
	int main(int argc,char *argv[])
	{

	int a,b,c;
	
	cout << "Enter the three no's : ";
	
	cin >> a >> b >> c;
	
	if(a < c && b < c)
		{
			cout << c << " is Bigger.\n";
		}
	else if(a < b && c < b)
		{
			cout << b << " is Bigger.\n";
		}
	else if(b < a && c < a)
		{
			cout << a << " is Biggar.\n";
		}


	return 0;
	}
