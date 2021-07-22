#include<stdio.h>

int main(void){

	int senha;
	printf("digite aqui sua senha: \n");
	scanf("%d", &senha);

	if (senha == 1234)
	{
		printf("acesso permitido!\n");
	}
	else
	{
		printf("acesso negado!\n");
	}
}