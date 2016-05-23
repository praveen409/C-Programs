



	#include<iostream>
	#include<vector>

	using namespace std;


	int main()
	{
		vector<string> v1;


		cout<<"Size of v1 : "<<v1.size()<<"\n";

	
		v1.push_back("Kashif");
		v1.push_back("Balamurgan");
		v1.push_back("Varatharajan");


		cout<<"Size of v1 : "<<v1.size()<<"\n";

		vector<string>::iterator x = v1.begin();	

		while( x != v1.end())
		{
			cout<<"element : "<<*x<<"\n";

			x++;
		}
		





		return 0;
	}
