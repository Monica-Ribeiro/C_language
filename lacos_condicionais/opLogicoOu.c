#include<stdio.h>

int main(void){

	int base,altura, perimetro, area;
	printf("digite a base do retangulo: \n");
	scanf("%d", &base);
	printf("digite a altura do retangulo:\n");
	scanf("%d",&altura);
	area = base * altura;
	perimetro = base * altura *4;

	if (area < 25 || perimetro < 20)
	{
		printf("retangulo pequeno.\n");
	}
	else
	{
		printf("retangulo grande.\n");
	}

	return 0;
}