
	




	int xstrlen(const char text[])
	{
		int i, length=0;

		i = 0;

		while( text[i] != '\0' )
		{
			length++;
			i++;
		}

		return length;
	}





			void xstrrev(char str[])
			{
				int i, j, length = 0;
				char temp;		

				for(i = 0; str[i] != '\0'; i++)	
				{
					length++;
				}
			
				j = length - 1;

				i = 0;

				while(i <= j)
				{
					temp = str[i];
					str[i] = str[j];
					str[j] = temp;

					i++;
					j--;
				}

			}	

