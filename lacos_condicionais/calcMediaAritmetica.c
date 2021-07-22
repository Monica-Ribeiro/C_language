#include<stdio.h>

int main(void){
	int n1, n2, n3, n4;
	printf("digite aqui a primeira nota:\n");
	scanf("%d", &n1);
	printf("digite aqui a segunda nota:\n");
	scanf("%d", &n2);
	printf("digite aqui a terceira nota:\n");
	scanf("%d", &n3);
	printf("digite aqui a quarta nota:\n");
	scanf("%d", &n4);
	int mediaFinal = (n1 + n2 + n3 + n4) / 4;

	if (!(mediaFinal >8))
	{
		printf("voce foi reprovado :(\n");
	}
	else
	{
		printf("voce foi aprovado :)\n");
	}

}