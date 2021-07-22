#include<stdio.h>

/*Desenvolver um sistema que  efetue um laço que realize a soma dos números 
ímpares e múltiplos de três contidos no conjunto de 0 a 500. Imprima o resultado no final.*/

int main(int argc, char const *argv[])
{	
	int soma = 0;
	//numero impar: eh um numero que quando dividido por 2 o resultado e diferente de zero.
	//numero multiplo de 3: eh um numero que quando dividido por 3 o resto e zero.

	for (int i = 0; i <= 500; i++)
	{
		if (i % 2 != 0 && i % 3 == 0)
		{
			soma = soma +  i;
		}
	}

	printf("resultado da soma: %d\n", soma);

	return 0;
}