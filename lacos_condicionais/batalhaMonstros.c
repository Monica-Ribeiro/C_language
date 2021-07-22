#include<stdio.h>

int main(void){

	int pontos1, pontos2, estrela1, estrela2;
	printf("qual a pontuacao do primeirolutador? \n");
	scanf("%d", &pontos1);
	printf("insira aqui as estrelas que o lutador possui: \n");
	scanf("%d", &estrela1);
	printf("qual a pontuacao do segundo lutador? \n");
	scanf("%d", &pontos2);
	printf("insira a quantidade de estrelas que o lutador possui: \n");
	scanf("%d", &estrela2);



	if (estrela1 == estrela2 && pontos1 == pontos2)
	{
		printf("empate entre os oponentes! \n");
	}
	else if (estrela1 > estrela2 && pontos1 > pontos2)
	{
		printf("monstro1 eh mais forte e tem mais estrelas. \n");
	}
	else if (pontos1 > pontos2 && estrela1 < estrela2)
	{
		printf("monstro1 eh mais forte e tem menos estrelas. \n");
	}
	else if (estrela2 > estrela1 && pontos2 > pontos1)
	{
		printf("monstro2 eh mais forte e tem mais estrelas. \n");
	}
	else if (pontos2 > pontos1 && estrela2 < estrela1)
	{
		printf("monstro2 eh mais forte e tem menos estrelas. \n");
	}
	else
	{
		printf("comando invalido, tente de novo! \n");
	}

	return 0;

}