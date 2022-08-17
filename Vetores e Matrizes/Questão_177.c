/*Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
calcule a sua matriz transposta.*/

#include <stdio.h>

void main(){
	int mat[5][5];
	int k, i, aux;
	for(k=0;k<5;k++){
		for(i=0;i<5;i++){
			printf("Digite a posicao [%d][%d]: ", k, i);
			scanf("%d", &mat[k][i]);
		}
	}
	for(k=0;k<5;k++){
		for(i=0;i<5;i++){
			printf("%d ", mat[k][i]);
		}
		printf("\n");
	}
	printf("\n");
	for(k=0;k<5;k++){
		for(i=k;i<5;i++){
			aux = mat[k][i];
			mat[k][i] = mat[i][k];
			mat[i][k] = aux;
		}
	}
	for(k=0;k<5;k++){
		for(i=0;i<5;i++){
			printf("%d ", mat[k][i]);
		}
		printf("\n");
	}
}
