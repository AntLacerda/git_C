/*Escreva um programa que leia um vetor de 10 n�meros inteiros e, ap�s terminar a
leitura, leia um n�mero inteiro N e imprima todos os elementos do vetor que s�o
maiores que N.*/

#include <stdio.h>

void main(){
	int vetor[10], k, num;
	printf("Printando os numeros maiores!\n");
	for(k=0;k<10;k++){
		printf("Digite um numero: ");
		scanf("%d", &vetor[k]);
	}
	printf("Digite um numero para comparar: ");
	scanf("%d", &num);
	printf("Numeros digitados que sao maiores que %d: ", num);
	for(k=0;k<10;k++){
		if(vetor[k]>num){
			printf("%d ", vetor[k]);
		}
	}
}
