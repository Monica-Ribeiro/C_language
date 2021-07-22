#include<stdio.h>

/*A prefeitura de uma cidade fez uma pesquisa entre 20 de seus habitantes,
coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:  
a) média do salário da população;
b) média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$100,00.*/


int main(int argc, char const *argv[])
{
	double salario;
	int qtdFilhos;
	double mediaSalario;
	int numeroParticipantes = 0;
	double somatorio = 0;
	double mediaFilhos;
	int somatorioFilhos = 0;
	double maiorSalario;
	//int percentual;

	for (int i = 0; i < 5; i++)
	{
		printf("insira seu salario: \n");
		scanf("%lf", &salario);
		if (maiorSalario > Salario)
		{
			maiorSalario = Salario;
		}
		somatorio = somatorio + salario;
		printf("insira a quantidade de filhos que voce tem: \n");
		scanf("%d", &qtdFilhos);
		somatorioFilhos = somatorioFilhos + qtdFilhos;
		numeroParticipantes++;
	}
	printf("\n");
	//media = soma dos valores dividindo pela quantidade de valores existentes
	mediaSalario = somatorio / numeroParticipantes;
	printf("media de salario da populacao: %.2lf\n", mediaSalario);

	mediaFilhos = (double)somatorioFilhos / (double)numeroParticipantes;
	printf("media de filhos por habitante: %.0lf\n", mediaFilhos);

	printf("o maior salario da pesquisa foi: %.2lf\n", maiorSalario);

	return 0;
}