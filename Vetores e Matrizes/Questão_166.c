/*Escreva um programa que leia dois vetores A e B de 5 números inteiros e calcule um
terceiro vetor que contenha todos os elementos do vetor A que não estão presentes
no vetor B. O terceiro vetor não deverá armazenar valores repetidos.*/

#include <stdio.h>

void main(){
	int vet1[5], vet2[5], vet3[5], vet4[5];
	int k, i, cont, aux, aux2;
	for(k=0;k<5;k++){
		printf("Digite um numero[vet1]: ");
		scanf("%d", &vet1[k]);
	}
	for(k=0;k<5;k++){
		printf("Digite um numero[vet2]: ");
		scanf("%d", &vet2[k]);	
	}
	for(k=0;k<5;k++){
		for(i=0;i<5;i++){
			if(vet1[k]==vet2[i]){
				cont++;
			}
		}
		if(cont==0){
			vet3[aux] = vet1[k];
			aux++;
		}
		cont = 0;
	}
	for(k=0;k<aux;k++){
		for(i=0;i<aux;i++){
			if(vet3[k]==vet4[i]){
				cont++;
			}
		}
		if(cont==0){
			vet4[aux2] = vet3[k];
			aux2++;
		}
		cont = 0;
	}
	for(k=0;k<aux2;k++){
		printf("%d ", vet4[k]);
	}
}
