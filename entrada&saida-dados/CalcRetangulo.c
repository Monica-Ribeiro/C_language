#include <stdio.h>

int main(void){
	int base, altura;
	printf("digite aqui a base do retangulo\n");
	scanf("%d",&base);
	printf("digite aqui a altura do retangulo\n");
	scanf("%d", &altura);
	int area = base * altura;
	printf("a area do retangulo e:%d\n", area);
	return area;
}