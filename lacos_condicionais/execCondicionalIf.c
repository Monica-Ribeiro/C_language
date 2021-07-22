#include <stdio.h>

void comparaNumeros(int n1, int n2){
	if (n1 > n2)
	{
		printf("o maior numero e n1: %d\n", n1);
	}
	else if (n2 > n1)
	{
		printf("o maior valor e n2: %d\n", n2);
	}
	

}

int main(void){
	int n1, n2;
	printf("insira aqui o primeiro numero:\n");
	scanf("%d", &n1);
	printf("insira o segundo numero:\n");
	scanf("%d", &n2);
	comparaNumeros(n1, n2);
	return 0;


}