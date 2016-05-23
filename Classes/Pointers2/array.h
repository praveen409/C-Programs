






	int getMaximum(const int *ptr, int n)
	{
		int i, max=0;


		for(i = 0; i < n; i++)
		{
			if( max < *(ptr + i))
			{
				max = *(ptr + i);
			}
		}

		return max;

	}





	void getMaxMin(const int *ptr1, int n, int *ptr2, int *ptr3)
	{

		int i, max, min;


		max = *ptr1; // the first element of the array
		min = *ptr1;


		for( i = 1; i < n; i++) 
		{

			if( max < *(ptr1 + i) )
			{
				max = *(ptr1 + i); 
			}


			if( min > *(ptr1 + i) )
			{
				min = *(ptr1 + i);
			}

		}


		*ptr2 = max;
		*ptr3 = min;

	}






	int xstrlen(const char *ptr)
	{	
		int count = 0;
		while(*ptr != '\0')
		{
			count++;
			ptr++;
		}
		return count;
	}




	
