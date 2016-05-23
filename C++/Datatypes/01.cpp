


	#include<iostream>
	using namespace std;


	
/////////////      FUNCTION FOR FINDING ELEMENT      ////////////

	bool findElement(int a[], int x, int y)
	{
	bool n;
	for(int i =0;i<=x;i++)
	{
		if(a[i]==y)
		{
			n = true;
		}
	
	}
	return n;
	}

////////////       FINDING MAX & MIN ELEMENTS IN ARRAY      ///////////

	void findMaxMin(int a[], int n, int &m1, int &m2)
	{
	m1 = 1000;
	m2 = 0;
	for(int i=0; i<n;i++)
	{
		if(m2 < a[i])
		{
			m2 = a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(m1 > a[i])
		{
			m1 = a[i];
		}
	}
	
	}

//////////////      SORTING ELEMENTS  FUNCTION       /////////////

	void sort(int a[], int n)
	{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
		if(a[j] > a[j+1])
		{
		int temp=0;
		temp = a[j];
		a[j] = a[j+1];
		a[j+1] = temp;	
		}
		}
	}
	}

/////////////////      MAIN PROGRAM       /////////////////

	int main()
	{
	int m1,m2;
	int arr[] = {45, 12,42,85,26};
	bool exe = false;

///////////////////          Functions calling            ////////////

	exe = findElement(arr, 5, 45);

	findMaxMin(arr, 5, m1, m2);

	sort(arr,5);


///////////////////      OUT PUT FOR MIN & MAX ELEMENTS IN ARRAY ////////


	cout<< "The minimum value is : "<<m1<<endl;
	cout<< "The Maximum value is : "<<m2<<"\n"<<endl;



////////////////////        OUT PUT FOR FINDING ELEMENTS OR NOT //////////
	if(exe)
	{
		cout << "The element is Found \n"<<endl;
	}
	else
	{
		cout << "The element is not Found \n "<<endl;
	}	

///////////////////          SORTING OUT PUT  /////////////////////////
	cout<< "     After sorting         "<<endl;
	for(int i=0;i<5;i++)
	{
	cout <<" "<< arr[i]<<endl;
	}


///////////////////////////////////////////////////////////////////////

	return 0;
	}
