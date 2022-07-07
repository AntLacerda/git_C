/*Escreva um programa que leia dez números inteiros e, após finalizar a leitura, leia um
número inteiro N (entre 1 e 10) e imprima qual foi o enésimo número digitado pelo
usuário. */

#include <stdio.h>

void main(){
	int vetor[10], k, posicao;
	printf("Posicao no vetor!\n");
	for(k=0;k<10;k++){
		printf("Digite um numero: ");
		scanf("%d", &vetor[k]);
	}
	printf("Digite a posicao desejada: ");
	scanf("%d", &posicao);
	printf("O numero digitado na posicao %d foi %d.", posicao, vetor[posicao-1]);	
}
