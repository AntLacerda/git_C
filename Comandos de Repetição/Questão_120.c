/*Escreva um programa que leia um n�mero inteiro positivo N e imprima a maior
quantidade poss�vel de n�meros inteiros positivos de forma que a soma de todos os
n�meros impressos seja menor ou igual a N.*/

#include <stdio.h>

void main(){
	int n, k, resultado=0;
	printf("Soma de numeros com limite!\n");
	printf("Digite um numero: ");
	scanf("%d", &n);
	for(k=1;k<=n;k++){
		resultado += k;
		if(resultado<=n){
			printf("%d ", k);	
		}
	}
}
