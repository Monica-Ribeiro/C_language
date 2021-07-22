#include<stdio.h>

/*Desenvolver um sistema que  efetue um laço que realize a soma dos números 
ímpares e múltiplos de três contidos no conjunto de 0 a 500. Imprima o resultado no final.*/

int main(int argc, char const *argv[])
{
	int soma = 0;
	int i;

	while(i <= 500)
	{
		if (i % 2 != 0 && i % 3 == 0)
		{
			soma = soma +  i;
		}

		i++;
	}

	printf("resultado da soma: %d\n", soma);
	
	return 0;
}