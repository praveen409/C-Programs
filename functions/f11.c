



	#include<stdio.h>
	#include<math.h>
	float square(float);
	int main()
	{
		float a=2.5;
		float v,w,x,y,z;

			w= sin(a);
			x= cos(a);
			y= tan(a);
			z= pow(a,3);
			v= square(a);

	printf("The value of a is %f\n",a);
	printf("Adress of a= %lu\n", &a);

	printf("Adress of a= %lu\n", *(&a));
	printf("%f\t%f\t%f\t%f\t%f\n",w,x,y,z,v);
	return 0;
	}


	float square(float x)
	{
	float y;
	y = x * x;
	return (y);
	}


