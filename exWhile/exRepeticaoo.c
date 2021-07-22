#include<stdio.h>

/*Faça um programa que leia sucessivamente um número digitado pelo usuário e que para 
a leitura quando o número digitado for -1; Seu programa deve mostrar ao final
O maior número digitado
O menor número digitado
A média aritmética dos valores digitados
O somatório dos valores digitados*/


int main(int argc, char const *argv[])
{	
	int numero = 0;
	int maiorNumero = 0;
	int menorNumero = 0;
	double mediaValores = 0;
	double somatorio = 0;
	int qtdNumeros = 0;

	printf("digite um numero: \n");
	scanf("%d", &numero);
	menorNumero = numero;

	while(numero != -1)
	{

		if (maiorNumero < numero)
		{
			maiorNumero = numero;
		}
		if (menorNumero > numero)
		{
			menorNumero = numero;
		}

		somatorio = (double)somatorio + (double)numero;

		printf("digite um numero: \n");
		scanf("%d", &numero);
		qtdNumeros++;

	}

	//media e calculada fora do laco, pois ela depende do valor fechado da 
	//variavel somatorio(valor final do somatorio).
	mediaValores = (double)somatorio / (double)qtdNumeros;
	printf("o maior valor digitado eh: %d\n", maiorNumero);
	printf("o menor valor digitado eh: %d\n", menorNumero);
	printf("soma dos valores digitados: %.2lf\n", somatorio);
	printf("media dos valores digitados: %.2lf\n", mediaValores);
	
	return 0;
}