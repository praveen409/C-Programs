
	#include<stdio.h>
	int main()
	{
	int a[10],n,i;
	

	printf("\nEnter the 10 values");
	
	for(i=0; i<10; i++)
	{

	scanf("%d", &a[i]);
											}
	{
	printf("Enter the value to find");
	scanf("%d",&n);
	}
	for(i=0;i<10;i++)
	if(a[i]==n){
	printf("The value is stored at a[%d] position.\n",i);
	}else{printf("You entered rong input\n");break;}
	
	return 0;
	}

