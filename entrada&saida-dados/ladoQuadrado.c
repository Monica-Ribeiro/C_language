#include <stdio.h>

int main(){

	int ladoQuadrado;
	printf("digite o lado do quadrado:\n");
	scanf("%d",&ladoQuadrado);
	int perimetro = ladoQuadrado * 4;
	printf("o perimetro do quadrado e: %d\n", perimetro);
	int area = ladoQuadrado * ladoQuadrado;
	printf("o valor da area e:%d\n", area);
}