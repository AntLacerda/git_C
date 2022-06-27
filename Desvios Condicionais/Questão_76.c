/*Escreva um programa que leia as coordenadas x e y de um ponto e verifique a qual
quadrante este ponto pertence. Você pode supor que o ponto digitado pelo usuário
pertence a apenas um quadrante.*/

#include <stdio.h>

void main(){
	int x, y;
	printf("Calculando o quadrante do ponto!\n");
	printf("Digite o valor de X: ");
	scanf("%d", &x);
	printf("Digite o valor de Y: ");
	scanf("%d", &y);
	if(x>0&&y>0){
		printf("O ponto das coordenadas (%d, %d) esta no 1 quadrante!", x, y);	
	}
	else if(x<0&&y>0){
		printf("O ponto das coordenadas (%d, %d) esta no 2 quadrante!", x, y);
	}
	else if(x<0&&y<0){
		printf("O ponto das coordenadas (%d, %d) esta no 3 quadrante!", x, y);
	}
	else{
		printf("O ponto das coordenadas (%d, %d) esta no 4 quadrante!", x, y);
	}
}
