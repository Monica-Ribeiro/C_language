#include<stdio.h>

int main(void){

	int baseRetangulo, alturaRetangulo,baseTriangulo, alturaTriangulo;

	printf("digite aqui a base do retangulo: \n");
	scanf("%d", &baseRetangulo);
	printf("digite aqui a altura do retangulo: \n");
	scanf("%d", &alturaRetangulo);
	printf("digite aqui a base do triangulo: \n");
	scanf("%d", &baseTriangulo);
	printf("digite aqui a altura do triangulo: \n");
	scanf("%d", &alturaTriangulo);

	int areaRetangulo = baseRetangulo * alturaRetangulo ;
	int areaTriangulo = (baseTriangulo * alturaTriangulo) / 2;

	if (areaRetangulo > areaTriangulo && baseRetangulo != alturaRetangulo)
	{
		printf("eh um retangulo e eh maior que o triangulo.  \n");
	}
	else if (areaRetangulo > areaTriangulo && baseRetangulo == alturaRetangulo)
	{
		printf("eh um quadrado e eh maior que o triangulo. \n");
	}
	else if (areaRetangulo < areaTriangulo && baseRetangulo != alturaRetangulo)
	{
		printf("eh um retangulo e eh menor que o triangulo. \n");
	}
	else
	{
		printf("eh um quadrado e eh menor que o triangulo. \n");
	}

	return 0;


}