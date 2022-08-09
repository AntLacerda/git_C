/*Escreva um programa que leia dois vetores A e B de 5 números inteiros cada e calcule
um terceiro vetor que contenha todos os elementos que estão presentes em pelo
menos um dos vetores lidos. O terceiro vetor não deve armazenar valores repetidos.*/

#include <stdio.h>

void main(){
	int vet1[5], vet2[5], vet3[10];
	int k=0, i=0, cont=0, aux=0;
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
	for(k=0;k<aux;k++){
		printf("%d ", vet3[k]);
	}
}
