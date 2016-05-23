

	#include<iostream>
	using namespace std;
	
	int main(int argc,char *arcv[])
	{
	char ch;int flag;
	
	cout << "Enter the Charecter : ";
	cin >> ch;
	
	if(ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U'||ch == 'a'||ch == 'e'||ch =='i'||ch == 'o'||ch =='u')
		{
			flag = 0;
		}
	else
		{
			flag = 1;
		}


	switch(flag)
	{
		case 0:
			cout << ch << " is VOWELE\n";
			break;
		
		case 1:
			cout << ch << " is CONSONENT\n";
			break;
		defalut:
			return 0;

	}
	
	return 0;
	}
