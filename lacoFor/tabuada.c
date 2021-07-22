#include<stdio.h>
/*
	7 * 1 = 7		n * m = result
	7 * 2 = 14		n * m + 1 = result
	7 * 3 = 21		n * m + 2 = result

*/

int main(int argc, char const *argv[])
{	
	int n, m;
	

	for (int n = 1; n <= 10; n++)
	{	

		for (int m = 1; m <= 10; m++)
		{
			if (n % 3 == 0)
			{
				printf("%d * %d = %d\n", n, m, n * m);
			}
		}

		printf("\n");
	}
	
	return 0;
}