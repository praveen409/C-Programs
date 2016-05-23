
	#include<stdio.h>
	enum Week 
	{
		Sunday,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday

	};

	int main()
	{
		enum Week w;
		
		for(w=Sunday; w<=Saturday; w++)
		{
			printf("%d\n", w);
		}	

		return 0;
	}
