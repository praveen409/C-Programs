

	#include<iostream>
	#include<cstring>
	using namespace std;


	class String
	{
		private:
			char str[100];
			int length;

		public:

			void setString(char *s)
			{
				strcpy(str,s);
			}

		///////////////////////

			void printString()
			{
			cout << "\n\nYOU ENTERED STRING :: "<< str << endl;
			}
		/////////////////////////
	
			void strrev()
			{
			char str2[100];
			int l;
			strcpy(str2,str);

			l = (strlen(str2)-1);
			
			for(int i=0;i<l;i++)
				{
				char temp;
				temp = str2[i];
				str2[i] = str2[l];
				str2[l] = temp;
				l--;
				}
		
			cout <<"\n\nAfter Reversing the string:: "<<str2<<endl;

			}
	
		//////////////////////////

			int xstrlen()
			{
			char str2[100];

			strcpy(str2,str);

			length = strlen(str2);

			return length;
			}

		//////////////////////////

			void strupr()
			{
			char str2[100];
			int le;
			strcpy(str2,str);

			le = (strlen(str2));

			for(int i=0;i<le;i++)
				{
				if(str2[i] >= 97 && str2[i] <= 122)
					{	
					str2[i] = str2[i] - 32;
					}
				}
			cout << "\n\nSTRING IS IN UPPER CASE : "<<str2<<endl;
			}

		//////////////////////////

			void strlwr()
			{
			char str2[100];
			int le;
			strcpy(str2,str);

			le = (strlen(str2));

			for(int i=0;i<le;i++)
				{
				if(str2[i] >= 65 && str2[i] <= 90)
					{	
					str2[i] = str2[i] + 32;
					}
				}
			cout << "\n\nSTRING IS IN LOWER CASE : "<<str2<<endl;
			}

	};
	
	
///////////////////         MAIN FUNCTION       /////////////////////

	
	int main()
	{
	char ch[100];
	int strl;

	String s1;
	
		cout<< "Enter the String : ";
		cin >> ch;
i

		s1.setString(ch);

		s1.printString();

		s1.strrev();

	//	s1.printString();

		strl = s1.xstrlen();	//    INT TYPE FUNCTION ......
		
		cout<< "\n\n THE STRING LENGTH IS : "<<strl<<endl;

		s1.strupr();

	//	s1.printString();

		s1.strlwr();
	
	//	s1.printString();

	cout << "\n\n"<<endl;

	return 0;
	}





