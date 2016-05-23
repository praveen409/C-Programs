



	#include<stdio.h>
	int main()
	{
	int n,a[100],b[100],i,j,temp=0,num=0;
	
	printf("\nenter the no bytes: ");
	scanf("%d",&n);
	
	printf("\nEnter the elements ");

	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
	while(a[i] != 0)
		{
		num=a[i]%10;	//	56%10=6;
		a[i]=a[i]/10;	//	56/10=5;
		temp=temp*10+num;	//	0*10+6=6;
		b[j]=temp;	//	
		}
		printf(" %d ",temp);
		j++;
		temp=0;
	}
	printf("\n");
	return 0;
	}
