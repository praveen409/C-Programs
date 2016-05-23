

	#include<iostream>
	#include<cstring>
	using namespace std;

/////////////     Replace Charecter program        ////////

	void replaceChar(char str[], char a, char x)
	{
	int len = (strlen(str)-1);
	for(int i=0;i<=len;i++)
		{
		if(str[i] == a)
			{
			str[i] = x;
			}
		}
	}



//////////	Reverse String Program         ///////////

	void reverseString(char str[])
	{
	
	int len = (strlen(str)-1);
	for(int i=0;i<len;i++)
		{
		char temp=0;
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		len--;
		}

	}	




////////         MAIN PROGRAM 		///////////

	int main()
	{
	char str[] = "Programming Language",str1[100];

	cout << "\t" << str <<"\n" <<endl;

	strcpy(str1,str);

/////////	FUNCTIONS CALLING   /////////////

	replaceChar(str, 'a', 'x');

	cout << "\tAFTER REPLACING a with x is\n\t" << str << "\n"<<endl;


	reverseString(str1);

/////////////////////    PRINTING THE OUT PUT    ///////

	cout << "\tAFTER REVESEING ENTAIRE STRING\n\t" << str1<<endl;


	return 0;
	}


