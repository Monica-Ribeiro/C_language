#include<stdio.h>

int main(int argc, char const *argv[])
{	
	double lanceDado = 5000;
	double maiorLance = 5000;
	int numeroLancesRepetidos;

	printf("vai comecar agora o leilao!\n");
	printf("temos aqui este belo fusca, onde iremos iniciar o lance com %lf.\n", maiorLance);
	
	for (int numeroLancesRepetidos = 0; numeroLancesRepetidos < 3;)
	{
		printf("%lf foi ofertado! quem da mais?\n", maiorLance);
		scanf("%lf", &lanceDado);

		if (lanceDado > maiorLance)
		{
			maiorLance = lanceDado;
			numeroLancesRepetidos = 0;
		}
		else{
			numeroLancesRepetidos++;
		}
	}

	printf("vendido para %lf!!!\n", maiorLance);
	return 0;
}