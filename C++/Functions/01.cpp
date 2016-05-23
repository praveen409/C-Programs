

	#include<iostream>
	using namespace std;
	
	int min(int a,int b)
	{
	if(a<b)
		{
			return a;
		}
	else
		{
			return b;
		}
	}
	

	int min(int a,int b,int c)
	{
	if(a<b && a<c)
		{
			return a;
		}
	else if(b<a && b<c)
		{
			return b;
		}
	else if(c<a && c<b)
		{
			return c;
		}
		
	}

	int min(int a[],int n)
	{
	int temp;
	for(int i=0; i < n ;i++)
		{
		if(a[i]>a[i+1])
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
		
		return a[0];
	}

	int main()
	{
	int a[] = {12,23,34,45,56},AAA,BBB,CCC;
	
	AAA = min(10,20);

	BBB = min(10,20,3);

	CCC = min(a,5);

	cout << "MINIMUM NO IN 10 & 20 IS = "<<AAA<<endl;
	
	cout << "MINIMUM NO IN 10,20,30 IS = "<<BBB<<endl;

	cout << "MINIMUM NO IN A[] ARRAY IS = "<<CCC<<endl;
	
	return 0;
	}
