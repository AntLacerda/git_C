/*. Escreva um programa que leia as coordenadas x e y de um ponto e verifique se este
ponto pertence à reta y = 2x +1*/

#include <stdio.h>

void main(){
	int x, y;
	printf("Conferindo as coordeandas do vertice!\n");
	printf("Digite o valor da coordenada x: ");
	scanf("%d", &x);
	printf("Digite o valor da coordenada y: ");
	scanf("%d", &y);
	int imagem = (2 * x) + 1;
	if(imagem==y){
		printf("O ponto pertence a reta!");
	}
	else{
		printf("O ponto nao pertence a reta!");
	}
}
