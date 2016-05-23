






	#include<iostream>
	using namespace std;

	int maximum(char x, char y)
	{
		cout<<"Invalid Operation....\n";
		return 0;
	}



	template<class T>
	T maximum(T x, T y)
	{
		if(x > y)
			return x;
		else
			return y;
	}




	int main()
	{
		cout<<"Maximum : "<<maximum(10,20)<<endl;
		cout<<"Maximum : "<<maximum(10.2, 3.14)<<endl;
		cout<<"Maximum : "<<maximum('A', 'a')<<endl;

		return 0;
	}
		
