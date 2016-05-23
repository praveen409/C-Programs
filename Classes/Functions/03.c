


	// Nested Function



	#include<stdio.h>



	void Chennai();  // Function Declaration ( Prototype )
	void Delhi();


	int main()
	{
		printf("I am in ISM....\n");

		Chennai(); // Function Calling

		printf("I am back to ISM.....\n");


		return 0;
	}



	// Function Definition
	void Chennai()
	{
		printf("I am in Chennai....\n");

		Delhi();

		printf("I am back to Chennai....\n");
	}



	void Delhi()
	{

		printf("I am right now in Delhi....\n");
	}

