/*Escreva um programa que leia uma matriz quadrada de ordem 4 de números inteiros
e imprima a matriz lida. */

#include <stdio.h>

void main(){
	int mat[4][4];
	int k, i;
	for(k=0;k<4;k++){
		for(i=0;i<4;i++){
			printf("Posicao [%d][%d]: ", k, i);
			scanf("%d", &mat[k][i]);
		}
	}	
	for(k=0;k<4;k++){
		for(i=0;i<4;i++){
			printf("%d ", mat[k][i]);
		}
		printf("\n");
	}
}
