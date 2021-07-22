#include <stdio.h>
/*1- Elaborar um programa que efetue a leitura sucessiva de valores numéricos e
apresente no final o total do somatório, a média e o total de valores lidos. O programa
deve fazer as leituras dos valores enquanto o usuário estiver fornecendo valores
positivos. Ou seja, o programa deve parar quando o usuário fornecer um valor
negativo.*/

int main(int argc, char const *argv[])
{	int recebeValores;
	int somatorio = 0;
	double media;
	int totalValores = 0;

	printf("digite um valor: \n");
	scanf("%d", &recebeValores);
	totalValores = totalValores + 1;
	

	while(recebeValores > 0){
		somatorio = somatorio + recebeValores;
		printf("digite um valor: \n");
		scanf("%d", &recebeValores);

		if (recebeValores > 0)
		{
			totalValores = totalValores + 1;
		}
	}
		printf("somatorio: %d\n", somatorio);

		media = (double)somatorio / (double)totalValores;

		printf("media: %lf\n", media );

		printf("total de valores lidos: %d\n", totalValores);
	
	return 0;
}