#include<stdio.h>

int main(int argc, char const *argv[])
{	
	for (int mes = 1; mes <= 12; mes++)
	{
		printf(" esse e o %d mes do ano.\n\n", mes);

			for (int dias = 1; dias <= 30; dias++)
		{
				if (dias % 2 == 0 && mes % 2 != 0)
				{
					printf(" esse e o %d dia do mes.\n", dias);
				}
		}
	}
	
	return 0;
}