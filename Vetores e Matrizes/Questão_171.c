/*Escreva um programa que leia dois vetores de 5 números reais cada e calcule o
produto escalar destes vetores*/

#include <stdio.h>

void main(){
	int k, resp=0, vet1[5], vet2[5];
	printf("Digite os valores do primeiro vetor:\n ");
	for(k=0;k<5;k++){
		printf("%d numero: ", k+1);
		scanf("%d", &vet1[k]);
	}
	printf("Digite os valores do segundo vetor:\n ");
	for(k=0;k<5;k++){
		printf("%d numero: ", k+1);
		scanf("%d", &vet2[k]);		
	}
	for(k=0;k<5;k++){
		resp = resp + (vet1[k]*vet2[k]);
	}
	printf("O produto escalar dos vetores digitados eh %d.", resp);
}
