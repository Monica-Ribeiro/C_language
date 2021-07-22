#include<stdio.h>

/*Desenvolver um sistema que recebe sucessivamente um número do usuário 
(enquanto esse número for positivo). O programa deve fazer a soma dos 
números pares que o usuário for digitando e imprimir o resultado final da soma no final. 
Dica: faça a primeira leitura antes do laço (para que seu número tenha um valor que permita a entrada no laço).*/

int main(int argc, char const *argv[])
{
	int numero = 0;
	int soma = 0;

	printf("digite um numero: \n");
	scanf("%d", &numero);

	while(numero > 0)
	{
		if (numero % 2 == 0)
		{
			soma = soma + numero;
		}

		printf("digite um numero: \n");
		scanf("%d", &numero);

	}
		printf("o resultado dos numeros pares eh: %d\n", soma);
	



	return 0;
}