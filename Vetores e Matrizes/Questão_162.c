/*Escreva um programa que leia um número inteiro entre 0 e 255 e calcule o seu valor
correspondente em binário.*/

#include <stdio.h>

void main(){
	int num, k=0, aux, i;
	int vetor[8], final[8];
	printf("Transformando em binario!\n");
	printf("Digite um numero: ");
	scanf("%d", &num);
	aux = num;
	do{
		vetor[k] = aux % 2;
		aux = aux / 2;
		k++;
	}while(aux!=0);
	printf("Binario: ");
	for(i=k-1;i>=0;i--){
		printf("%d", vetor[i]);
	}
}
