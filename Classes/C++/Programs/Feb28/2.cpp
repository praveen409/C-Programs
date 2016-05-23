



	#include<iostream>
	#include "myMath.h"
	#include "myString.h"
	using namespace std;


	int main()
	{
		char str1[]="Hello", str2[20];

		String::Copy(str2, str1);

		cout<<str1<<"\n";
		cout<<str2<<"\n";

		cout<<Math::pow(5,4)<<endl;

		return 0;
	}


	
