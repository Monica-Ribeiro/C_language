#include<stdio.h>

typedef struct carro{
	int numeroRodas;
	double quilometragem;
}carro_t;

int main(int argc, char const *argv[])
{
	carro_t meuCarrinhos[10];

	meuCarrinhos[0].quilometragem = 2.5;

	meuCarrinhos[0].numeroRodas = 4;

	printf("o carro 0 possui %d rodas\n",meuCarrinhos[0].numeroRodas);
	printf("quilometragem do carro 0: %lf\n", meuCarrinhos[0].quilometragem);

	for (int i = 0; i < 10; ++i)
	{
		meuCarrinhos[i].quilometragem = 0.0;
		meuCarrinhos[i].numeroRodas = 4;

		printf("o carro %d possui %lf km e %d rodas.\n", i+1, meuCarrinhos[i].quilometragem, meuCarrinhos[i].numeroRodas);

	}

	return 0;
}