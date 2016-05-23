
	#include<stdio.h>

	struct Student
	{
		char name[20];
		int marks[5];
		int total;
		float avg;
		char grade;
	};

// Main Function Starts From Here //
	
	int main()
	{
	struct Student Stu;
	int i;
	printf("\n Student Name: ");
	scanf("%s",Stu.name);

//In put 5 sub values //

	printf("Marks of 5 Subjects: ");
	for(i=0;i<5;i++)
	{
	scanf("%d",&Stu.marks[i]);
	}

// To calculate Total //

	Stu.total=0;
	for(i=0;i<5;i++)
	{
		if(Stu.marks[i]>=40)
		{
		Stu.total = Stu.total + Stu.marks[i];
		}
		else
		{
		printf("\nFail\n");
		return 0;
		}
	}
	printf("The Total is %d \n",Stu.total);


// To Calculate Avg //	

	Stu.avg = Stu.total/5;
	printf("The Avg is %.2f\n",Stu.avg);




// To print Grade//	
	
	if(Stu.avg<=100 && Stu.avg >=80)
	{
	printf("Grade : Distintion\n");
	}

	else if(Stu.avg<=80 && Stu.avg >=70)
	{
	printf("Grade : A\n");
	}

	else if(Stu.avg<=70 && Stu.avg >=60)
	{
	printf("Grade : B\n");
	}

	else if(Stu.avg<=60 && Stu.avg >=50)
	{
	printf("Grade : C\n");
	}
	
	if(Stu.avg<=50 && Stu.avg >=40)
	{
	printf("Grade : D\n");
	}

	
	return 0;
	}
	
	
