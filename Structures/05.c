



	#include<stdio.h>

	struct Passenger
	{
		char name[25];
		char origin[25];
		char destination[25];
		int fare;
	};


	int main()
	{
		struct Passenger p[100];
		int i,n;

		printf("\nEnter How Many Passengers You need: ");
		scanf("%d",&n);

	// to input passenger details //
			
		for(i=0;i<n;i++)
		{
			printf("\nName		: ");
			scanf("%s",p[i].name);
			printf("Origin		: ");
			scanf("%s",p[i].origin);
			printf("Destination	: ");
			scanf("%s",p[i].destination);
			printf("Fare		: ");
			scanf("%d",&p[i].fare);
		}
	// to printf that entered detals//

		for(i=0;i<n;i++)
		{
			printf("\n\n\tPassenger %d :",i);
			printf("\nName		: %s",p[i].name);
			printf("\nOrigin	: %s",p[i].origin);
			printf("\nDestination	: %s",p[i].destination);
			printf("\nFare		: %d",p[i].fare);
		}


	// to print the data in table form //
		printf("\nS.NO\tNAME\tORIGIN\tDESTINATION\tFARE");
		
		for(i=0;i<n;i++)
		{
		printf("\n%d\t%s\t%s\t%s\t\t%d\n",i,	p[i].name,
						p[i].origin,
						p[i].destination,
						p[i].fare);
		}



		printf("\n");
		return 0;
	}
