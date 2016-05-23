










	#include<stdio.h>

	int main()
	{
		int i=-3, j=2, k=-1, m;

		m = ++i && ++j && ++k;

		


		printf("%d, %d, %d, %d\n", i, j, k, m);
		


		return 0;
	}

	// m = -2 && 3 && 0
