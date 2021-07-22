#include<stdio.h>

/*Faça um programa que peça várias vezes para o usuário a base e a altura de um triângulo. 
Cada vez que for fornecida a base e a altura o programa deve calcular a área daquele triângulo 
e exibir na tela (deve fazer isso para todos os triângulos). O programa deve parar se o usuário 
digitar uma base negativa OU uma altura negativa.*/

int main(int argc, char const *argv[])
{
	int base=1;
	int altura=1;
	int area;

	while(base > 0 && altura > 0)
	{
		if (base == 0 || altura == 0)
		{
			break;
		}

		printf("digite a base do triangulo: \n");
		scanf("%d",&base);
		printf("digite a altura do triangulo: \n");
		scanf("%d", &altura);

		area = (base * altura) / 2;
		printf("a area do triangulo eh: %d\n", area);
	}

	return 0;
}