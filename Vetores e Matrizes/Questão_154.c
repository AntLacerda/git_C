/*Escreva um programa que leia dez n�meros inteiros e, ap�s finalizar a leitura,
imprima todos os n�meros lidos na ordem inversa em que eles foram digitados.*/

#include <stdio.h>

void main(){
	int vetor[10], k;
	printf("Testando Vetor inverso!\n");
	for(k=0;k<10;k++){
		printf("Digite um numero: ");
		scanf("%d", &vetor[k]);
	}
	printf("Numeros digitados na ordem inversa: ");
	for(k=9;k>=0;k--){
		printf("%d ", vetor[k]);
	}
}
