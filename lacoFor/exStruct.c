#include<stdio.h>

typedef struct jogo
{
	char nome[10];
	double preco;
	int id;

}jogo_t;

int main(int argc, char const *argv[])
{	
	jogo_t jogo[4];

	for (int i = 0; i < 4; i++)
	{
		jogo[i].id = i;
		printf("insira o nome do %dº jogo:\n", i+1);
		scanf("%s", jogo[i].nome);
		printf("insira o preco do %dº jogo:\n",i+1);
		scanf("%lf", &jogo[i].preco);
	}

	for (int i = 0; i < 4; i++)
	{	
		printf("o nome do %d° jogo e: %s\n",i +1, jogo[i].nome);
		printf("o preco do %d° jogo e: %lf\n\n",i +1, jogo[i].preco);

		if (jogo[i].id % 2 != 0)
		{
			printf("o id do %d° jogo e: %d\n", i + 1, jogo[i].id);
		}
	}
	return 0;
}