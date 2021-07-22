#include<stdio.h>

int main(int argc, char const *argv[])
{
	int contador = 0;

	while(contador <= 100){

		if (contador % 2 != 0 && contador % 3 == 0)
		{
			printf("%d\n", contador);
		}
		contador++;
	}


	return 0;
}