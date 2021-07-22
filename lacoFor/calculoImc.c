#include<stdio.h>

	/*Construa um sistema que peça a altura e o peso de 5 pessoas e calcule seu IMC 
	(índice de massa corpórea), exibindo-os na tela quando forem calculados. 
	Use o vídeo 1 para te guiar no raciocínio da repetição.*/

int main(int argc, char const *argv[])
{	double altura;
	double peso;
	double imc;

	

	for (int i = 0; i < 5; i++)
	{	
		printf("digite a sua altura: \n");
		scanf("%lf", &altura);
		printf("digite seu peso: \n");
		scanf("%lf", &peso);
		imc = peso / (altura * altura);
		printf("resultado: %.2lf\n\n", imc);
		
	}

		
	
	return 0;
}