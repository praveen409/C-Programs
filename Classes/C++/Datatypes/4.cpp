




	#include<iostream>
	#include<cctype>
	using namespace std;


	bool isVowel(char ch)
	{		
		switch( tolower(ch) )
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				return true;
				
			default:
				return false;
		}
	}




	int main()
	{

		char ch;


		cout<<"Enter the character : ";
		cin>>ch;


		if(isVowel(ch))
		{
			cout<<"Vowel......\n";
		}
		else
		{
			cout<<"Consonent....\n";
		}

		return 0;
	}	
