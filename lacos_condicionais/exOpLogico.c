#include<stdio.h>

int main(void)
{
	int idade, altura;
	printf("digite sua idade: \n");
	scanf("%d", &idade);
	printf("digite sua altura: \n");	
	scanf("%d", &altura);

	if (idade >= 18 && altura >= 100)
	{
		printf("nao possui nanismo.\n");
	}
	else
	{
		printf("possui nanismo.\n");
	}

	return 0;
}