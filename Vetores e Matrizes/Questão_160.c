/*Escreva um programa que leia um vetor de 10 números inteiros e inverta todos os
elementos do vetor. O programa deve ser resolvido com a utilização de apenas um
vetor.*/

#include <stdio.h>

void main(){
	int vetor[10], k, i=9, aux;
	printf("Invertendo o vetor usando apenas um vetor!\n");
	for(k=0;k<10;k++){
		printf("Digite o %d numero: ", k+1);
		scanf("%d", &vetor[k]);
	}
	printf("Vetor inicial: ");
	for(k=0;k<10;k++){
		printf("%d ", vetor[k]);
	}
	printf("\n");
	printf("Vetor invertido: ");
	for(k=0;k<5;k++){
		aux = vetor[k];
		vetor[k] = vetor[i];
		vetor[i] = aux;
		i--;
	}
	for(k=0;k<10;k++){
		printf("%d ", vetor[k]);
	}
}
