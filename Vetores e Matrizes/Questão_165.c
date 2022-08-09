/* Escreva um programa que leia dois vetores A e B de 5 números inteiros e calcule um
terceiro vetor que contenha todos os elementos que estão presentes nos dois
vetores. O terceiro vetor não deverá armazenar valores repetidos.*/

#include <stdio.h>

void main(){
	int vet1[5], vet2[5], vet3[10];
	int k, i, cont, aux;
	for(k=0;k<5;k++){
		printf("Digite um numero[vet1]:");
		scanf("%d", &vet1[k]);
	}
	for(i=0;i<5;i++){
		printf("Digite um numero[vet2]:");
		scanf("%d", &vet2[i]);
	}
	for(k=0;k<10;k++){
		vet3[k] = 0;
	}
	for(k=0;k<5;k++){
		for(i=0;i<5;i++){
			if(vet1[k]==vet3[i]){
				cont++;
			}
		}
		if(cont==0){
			vet3[aux] = vet1[k];
			aux++;
		}
		cont = 0;
	}
	for(k=0;k<5;k++){
		for(i=0;i<10;i++){
			if(vet2[k]==vet3[i]){
				cont++;
			}
		}
		if(cont==0){
			vet3[aux] = vet2[k];
			aux++;
		}
		cont = 0;
	}
	for(k=0;k<aux;k++){
		printf("%d ", vet3[k]);
	}
	
}
