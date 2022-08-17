/*Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
calcule o valor da soma dos elementos de cada uma de suas linhas. */

#include <stdio.h>

void main(){
	int mat[5][5];
	int k, i, soma;
	for(k=0;k<5;k++){
		for(i=0;i<5;i++){
			printf("Digite o numero da posicao [%d][%d]: ", k, i);
			scanf("%d", &mat[k][i]);
		}
	} 
	for(k=0;k<5;k++){
		for(i=0;i<5;i++){
			soma = soma + mat[k][i];
		}
		printf("%d linha: %d\n", k+1, soma);
		soma = 0;
	}
}
