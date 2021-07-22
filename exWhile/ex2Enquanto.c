/*2- Obtenha um número digitado pelo usuário e repita a operação de multiplicar ele por
três (imprimindo o novo valor) até que ele seja maior do que 100. Ex.: se o usuário
digita 5, deveremos observar na tela a seguinte sequência: 5 15 45 135.*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
	int numero;
	printf("digite um numero: \n");
	scanf("%d", &numero);
	printf("%d\n", numero);
	
	while(numero < 100)
		
	{	
		numero = numero * 3;
		printf("%d\n", numero);
		
	}


	return 0;
}