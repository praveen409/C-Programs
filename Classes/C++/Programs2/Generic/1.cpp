







	#include<iostream>
	using namespace std;

	template<typename T>
	T swaping(T &a, T &b)
	{
		T t;
		
		t = a;
		a = b;
		b = t;
		
	}
	

	int main()
	{
		char a = 'h', b = '*';

		cout<<"A : "<<a<<" "<<"B : "<<b<<endl;

		swaping(a, b);

		cout<<"A : "<<a<<" "<<"B : "<<b<<endl;
		 	
		return 0;
	}
