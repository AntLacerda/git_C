/*Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
determine o maior valor presente na diagonal principal.*/

#include <stdio.h>

void main(){
	int mat[5][5];
	int k, i, maior;
	for(k=0;k<5;k++){
		for(i=0;i<5;i++){
			printf("Digite o numero da posicao [%d][%d]: ", k, i);
			scanf("%d", &mat[k][i]);
		}
	}
	maior = mat[0][0];
	for(k=0;k<5;k++){
		if(mat[k][k]>maior){
			maior = mat[k][k];
		}
	}
	printf("O maior numero da diagonal principal eh %d.", maior);
}
