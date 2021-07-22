#include<stdio.h>

int main(void){
	int a, b, c;
	printf("digite o valor de a:\n");
	scanf("%d", &a);
	printf("digite o valor de b:\n");
	scanf("%d", &b);
	printf("digite o valor de c:\n");
	scanf("%d", &c);
	int perimetroo = a + b + c;
	printf("o resultado do perimetro e %d\n", perimetroo);
	return perimetroo;
}