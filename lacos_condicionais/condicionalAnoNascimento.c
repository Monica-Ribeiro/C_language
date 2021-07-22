#include<stdio.h>

void retornaIdade(void){
	int anoNascimento, anoAtual, idade;
	printf("informe seu ano de nascimento: \n");
	scanf("%d", &anoNascimento);
	anoAtual = 2021;
	idade = anoAtual - anoNascimento;
	printf("idade: %d\n", idade);

	if (idade >= 18 && idade <= 65)
	{
		printf("o voto e obrigatorio!\n");
	}
	else if (idade < 16)
	{
		printf("voce ainda nao pode votar!\n");
	}
	else if (idade >= 16)
	{
		printf("o voto e opcional!\n");
	}
	else if (idade < 0)
	{
		printf("voce e um alienigena!\n");
	}
	else
	{
		printf("comando invalido, tente novamente!\n");
	}
}

int main(void){

	retornaIdade();
	return 0;
}