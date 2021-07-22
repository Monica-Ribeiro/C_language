#include<stdio.h>

void comparaTresNumeros(){
	int n1, n2, n3;
	printf("digite o primeiro numero: \n");
	scanf("%d", &n1);
	printf("digite o segundo numero: \n");
	scanf("%d", &n2);
	printf("digite o terceiro numero:\n");
	scanf("%d", &n3);

	if (n1 > n2 && n1 > n3)
	{
		if (n2 > n3)
		{
			printf("o maior numero e n1: %d, o numero do meio e n2: %d, o menor numero e n3: %d\n", n1, n2, n3);
		}
		else if (n3 > n2)
		{
			printf("o maior numero e n1: %d, o numero do meio e n3: %d, o menor numero e n2: %d\n", n1, n3, n2);
		}
		
	}
	else if (n2 >n3 && n2 > n1)
	{

		if (n1 > n3)
		{
			printf("o maior numero e n2: %d, o numero do meio e n1: %d, o menor numero e n3: %d\n", n2, n1, n3);
		}
		else if (n3 > n1)
		{
			printf("o maior numero e n2: %d, o numero do meio e n3: %d, o menor numero e n1: %d\n", n2, n3, n1);
		}
	}
	else if (n3 > n1 && n3 >n2)
	{
		if (n2 > n1)
		{
			printf("o maior numero e n3: %d, o numero do meio e n2: %d, o menor numero e n1: %d\n", n3, n2, n1);
		}
		else if (n1 > n2)
		{
			printf("o maior numero e n3: %d, o numero do meio e n1: %d, o menor numero e n2: %d\n", n3, n1, n2);
		}
	}
	else
	{
		printf("comando invalido tente novamente!\n");
	}

}

int main(){
	comparaTresNumeros();
	return 0;
}