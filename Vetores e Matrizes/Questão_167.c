/* Escreva um programa que leia um vetor de dez números inteiros e ordene o vetor
lido em ordem crescente.*/

#include <stdio.h>

void main(){
	int vet[10];
	int k, i, aux;
	for(k=0;k<10;k++){
		printf("Digite um numero: ");
		scanf("%d", &vet[k]);
	}
	for(k=0;k<10;k++){
		for(i=9;i>=k;i--){
			printf("%d.%d\n", vet[i], vet[k]);
			if(vet[i]<vet[k]){
				aux = vet[i];
				vet[i] = vet[k];
				vet[k] = aux;
			}
		}
		printf("\n");
	}
	for(k=0;k<10;k++){
		printf("%d ", vet[k]);
	}
} 
