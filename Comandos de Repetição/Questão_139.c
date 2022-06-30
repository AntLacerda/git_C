/*Escreva um programa que leia um número inteiro N e um número inteiro K e
identifique o k-ésimo algarismo (da direita para a esquerda) do número N. Caso o
valor de k seja maior do que a quantidade de algarismos de N, a resposta do
programa deve ser 0.*/

#include <stdio.h>

void main(){
	int i, n, k, algarismo=0;
	printf("Identificando algarismo!\n");
	printf("Digite um numero: ");
	scanf("%d", &n);
	printf("Digite a posicao do algarismo desejado [direita para esqueda]: ");
	scanf("%d", &k);
	for(i=1;i<=k;i++){
		algarismo = n % 10;
		n = n / 10;
	}	
	printf("Algarismo: %d", algarismo);
}

