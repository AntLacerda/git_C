/*Escreva um programa que leia um vetor de 10 números inteiros e, após terminar a
leitura, leia um número inteiro N e imprima todas as posições em que o número N
aparece dentro do vetor.*/

#include <stdio.h>

void main(){
	int vetor[10], num, k;
	printf("Cantando posicao!\n");
	for(k=0;k<10;k++){
		printf("Digite um numero: ");
		scanf("%d", &vetor[k]);
	}
	printf("Digite o numero que vc quer a posicao: ");
	scanf("%d", &num);
	printf("O numero %d aparece nas posicoes: ", num);
	for(k=0;k<10;k++){
		if(vetor[k]==num){
			printf("%d ", k);
		}
	}
}
