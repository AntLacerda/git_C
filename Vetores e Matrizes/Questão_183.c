/*Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
a seguir leia um número inteiro N entre 1 e 5 e calcule a soma de todos os elementos
da linha N. */

#include <stdio.h>

void main(){
	int mat[5][5];
	int k, i, soma=0, num;
	for(k=0;k<5;k++){
		for(i=0;i<5;i++){
			printf("Digite o valor da posicao [%d][%d]: ", k, i);
			scanf("%d", &mat[k][i]);
		}
	}
	printf("Digite a linha que deseja somar: ");
	scanf("%d", &num);
	for(k=0;k<5;k++){
		soma = soma + mat[num-1][k];
	}
	printf("O valor da soma foi %d.", soma);
}
