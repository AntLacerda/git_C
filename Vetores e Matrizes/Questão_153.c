/*Escreva um programa que leia dez n�meros inteiros e, ap�s finalizar a leitura,
imprima todos os n�meros lidos na mesma ordem em que eles foram digitados.*/

#include <stdio.h>

void main(){
	int vetor[10], k;
	printf("Testando Vetores!\n");
	for(k=0;k<10;k++){
		printf("Digite um numero: ");
		scanf("%d", &vetor[k]);
	}
	printf("Os numeros digitados foram: ");
	for(k=0;k<10;k++){
		printf("%d ", vetor[k]);
	}	
}
