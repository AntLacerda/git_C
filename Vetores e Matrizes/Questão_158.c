/*Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a
leitura, imprima todos os elementos do vetor que são maiores do que a média
aritmética de todos os elementos do vetor. */

#include <stdio.h>

void main(){
	int vetor[10], soma=0, k;
	float media;
	printf("Elementos maiores que a media!\n");
	for(k=0;k<10;k++){
		printf("Digite o %d numero: ", k+1);
		scanf("%d", &vetor[k]);
		soma = soma + vetor[k]; 
	}
	media = (float)soma / 10;
	printf("Numeros maiores que a media do vetor: ");
	for(k=0;k<10;k++){
		if(vetor[k]>media){
			printf("%d ", vetor[k]);
		}
	}
}
