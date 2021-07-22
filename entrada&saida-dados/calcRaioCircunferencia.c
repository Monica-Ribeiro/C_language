#include<stdio.h>

int main(void){

	double area,perimetro;
	int raio;
	double pi = 3.14;
	printf("digite aqui o raio da circunferencia:\n");
	scanf("%d", &raio);
	area = pi * raio * raio;
	perimetro = 2 * pi * raio;
	printf("o valor da area e:%f, o valor do perimetro e: %f\n", area, perimetro);
}