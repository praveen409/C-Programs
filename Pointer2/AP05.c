

	#include<stdio.h>


	void sort(int *ptr, int n);

	int main()
	{
	int a[]={1,4,3,2,5,8,7,6,9,10},n,i=0;
	

	printf("\n Enter the sorting value : ");
	scanf("%d",&n);

	printf("\nTHE ARRAY ELEMENTS ARE: ");
	
	for(i=0;i<10;i++)
		{
		printf(" %d ",a[i]);
		}

	sort(a,n);

	printf("\n After Sorting The Array is : ");

	for(i=0;i<10;i++)
		{
		printf(" %d ",a[i]);
		}
	

	printf("\n");
	return 0;
	}



	void sort(int *ptr,int n)
	{
	int i=0,j=0,temp=0;
	
	
	for(j=0;j<n;j++)
		{
		for(i=0;i<n;i++)
		{	
		if((*(ptr+i)) > (*(ptr+i+1)))
			{
			temp = *(ptr+i);
			*(ptr +i) = *(ptr +i+1);
			*(ptr + i+1) = temp;
			
			}
		}
		}
	}
	


