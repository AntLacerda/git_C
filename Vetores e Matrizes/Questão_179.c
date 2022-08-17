/*Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
imprima todos os elementos que estão acima e abaixo da diagonal principal.*/

#include <stdio.h>

void main(){
	int mat[5][5];
	int k, i;
	for(k=0;k<5;k++){
		for(i=0;i<5;i++){
			printf("Digite a posicao [%d][%d]: ", k, i);
			scanf("%d", &mat[k][i]);
		}
	}
	for(k=0;k<5;k++){
		for(i=0;i<5;i++){
			if(k==i){
				printf("* ");
			}
			else{
				printf("%d ", mat[k][i]);
			}
		}
		printf("\n");
	}
}
