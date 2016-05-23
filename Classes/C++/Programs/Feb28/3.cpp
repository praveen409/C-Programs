
	#include<iostream>
	#include "yourString.h"
	using namespace std;

	int main()
	{
		String s1("MyString");
		String s2;

		s1.putString();
		s2.copy(s1, 5); 
		s2.putString();

		cout<<"Length of s1 : "<<s1.length()<<"\n";
		cout<<"Length of s2 : "<<s2.length()<<"\n";

		String s3("Hello");

		s3.concat(s1);
		s3.putString();

		cout<<"Length of s3 : "<<s3.length()<<"\n";

		String::reverse(s1); 
		s1.putString();		
		return 0;
	}

	
