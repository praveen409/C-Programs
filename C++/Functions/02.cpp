

	#include<iostream>
	#include<string.h>
	using namespace std;

	int xstrlen(char str[])
	{
	int i=0,len=0;

	while(str[i]!='\0')
	{
		len++;
		i++;
	}
	return len;
	}
	
	int xstrlen(char str[],char ch)
	{
	int i=0,count=0;
	while(str[i]!='\0')
		{
		if(str[i] == ch)
			{
				count++;
			}
		i++;
		}

	return count;
	}

	void xstrrev(char str[])
	{
		int i=0,len=0,j;
		char temp;
		
		cout<< str<< "          Befor revercing      "<<endl;
		
		while(str[i]!='\0')
			{
			len++;
			i++;
			}
		//	cout << "Len " << len<<endl;
	
 	//	len = strlen(str);

		for(i=0,j=len-1;i<j;i++,j--)
		{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		}

	cout << str <<"        After reversing "<<"\n" <<endl;
	}

	void xstrrev(char str[],int min,int max)
	{
		
		int i=0,len=0,j;
		char temp;
		cout << str<<"        String before Revers"<<endl;
		
/*		while(str[i]!='\0')
			{
			len++;
			i++;
			}
	//	cout << "Len "<< len<<endl;	*/
	
		for(i = min; i < max;i++,max--)
		{
			temp = str[i];
			str[i] = str[max];
			str[max] = temp;
			
		}
	
	cout << str << "        After reversing"<< "\n"<<endl;
	}


	int main()
	{
	char str[]= "Programming",str1[100];
	int length,chlen;
	
	strcpy(str1,str);
	
	length = xstrlen(str);		// 11
	
	chlen = xstrlen(str,'g');	// 2
	
	xstrrev(str);			// gnimmaargorP

	xstrrev(str1,2,6);		// Pr(margo)ming
	
	
	cout << "String length is "<<length<<endl;
	
	cout << "charecters in string is "<<chlen<<endl;
	
	return 0;
	}
