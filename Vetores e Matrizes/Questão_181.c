/*Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
a seguir leia um número inteiro N entre 1 e 5 e imprima os N primeiros elementos da
sua diagonal principal. */

#include <stdio.h>

void main(){
	int mat[5][5];
	int k, i, num;
	for(k=0;k<5;k++){
		for(i=0;i<5;i++){
			printf("Digite o numero da posicao [%d][%d]: ", k, i);
			scanf("%d", &mat[k][i]);
		}
	}
	printf("Digite um numero entre 1 e 5: ");
	scanf("%d", &num);
	for(k=0;k<num;k++){
		printf("%d ", mat[k][k]);
	}
}
