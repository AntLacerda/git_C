/*Escreva um programa que leia uma matriz quadrada de ordem 5 de números reais e
a seguir leia um número inteiro N entre 1 e 5 e calcule a média aritmética dos
elementos da coluna N.*/

#include <stdio.h>

void main(){
	int mat[5][5];
	int k, i, num, soma;
	float media;
	for(k=0;k<5;k++){
		for(i=0;i<5;i++){
			printf("Digite o valor da posicao [%d][%d]: ", k, i);
			scanf("%d", &mat[k][i]);
		}
	}
	printf("Digite a linha da media: ");
	scanf("%d", &num);
	for(k=0;k<5;k++){
		soma = soma + mat[num-1][k];
		media = (float)soma / 5; 
	}
	printf("A media eh %.2f", media);
}
