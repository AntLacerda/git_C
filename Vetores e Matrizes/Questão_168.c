/*Escreva um programa que leia dois vetores A e B de 5 números inteiros já ordenados
e gere um terceiro vetor também ordenado contendo todos os elementos dos dois
vetores lidos. O terceiro vetor deve ter todos os elementos dois vetores, incluindo as
repetições. */

#include <stdio.h>

void main(){
	int vet1[5], vet2[5], vet3[10], vet4[10];
	int k, i, aux;
	for(k=0;k<5;k++){
		printf("Digite um numero[vet1]: ");
		scanf("%d", &vet1[k]);
	}
	for(k=0;k<5;k++){
		printf("Digite um numero[vet2]: ");
		scanf("%d", &vet2[k]);
	}
	for(k=0;k<5;k++){
		vet3[k] = vet1[k];
	}
	for(k=5;k<10;k++){
		vet3[k] = vet2[k-5];
	}
	for(k=0;k<10;k++){
		for(i=9;i>k;i--){
			if(vet3[k]>=vet3[i]){
				aux = vet3[k];
				vet3[k] = vet3[i];
				vet3[i] = aux;
			}
		}
	}
	for(k=0;k<10;k++){
		printf("%d ", vet3[k]);
	}
}

