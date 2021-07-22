#include<stdio.h>

/*
	8 X 1 = 8		m x n = result
	8 x 2 = 16		m x n = result

*/

int main(int argc, char const *argv[])
{	
	int m = 8;

	for (int n = 1; n <= 10; n++)
	{
		printf("%d X %d = %d\n",m, n, m * n);
	}
	return 0;
}