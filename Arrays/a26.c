

	#include<stdio.h>
	int b[3][3];
	int main()
	{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j;
	float det=0;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		printf(" %d ",a[i][j]);
		}
	printf("\n");
	}

	printf("\nThe Opposite diagnal matrix is : \n");

	for(i=0;i<3;i++)
	{
	printf("\n");
		for(j=3;j>=0;j--)
		{
		if(i != j){
		printf("   ");}
		else{
		printf(" %d ",a[j][i]);}
		}
	}





	printf("\n");
	return 0;
	}
