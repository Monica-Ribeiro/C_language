#include <stdio.h>

int main(void){

	int base, altura;
	printf("digite aqui a base do triangulo:\n");
	scanf("%d", &base);
	printf("digite aqui a altura do triangulo:\n");
	scanf("%d", &altura);
	int area = (base * altura) / 2;
	printf("a area do triangulo e: %d\n", area);
}