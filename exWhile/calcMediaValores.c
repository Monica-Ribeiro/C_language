#include<stdio.h>

/*Faça um programa que receba sucessivamente um número do usuário 
e calcule a média dos números pares que foram digitados. 
Pare a execução do laço quando o número digitado for zero.*/

int main(int argc, char const *argv[])
{
	int numero = 0;
	int soma = 0;
	double media = 0;

	printf("digite um numero: \n");
	scanf("%d", &numero);

	while (numero > 0)
	{
		if (numero % 2 == 0)
		{
			soma = soma + numero;
		}
		if (numero == 0)
		{
			break;
		}

		printf("digite um numero: \n");
		scanf("%d", &numero);
	}

	media = (double)soma + (double)numero;
	printf("a media e: %.2lf\n", media);
	
	return 0;
}