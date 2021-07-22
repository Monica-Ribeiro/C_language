#include<stdio.h>

int main(int argc, char const *argv[])
{	
	for (int mes = 1; mes <= 12; mes++)
{
	printf("\n\nesse e o %dº mes do ano.\n\n", mes);

	for (int dias = 1; dias <= 30; dias++)
	{
		printf("esse e o %dº dia do mes.\n", dias);
	}
}
	
	
	return 0;
}