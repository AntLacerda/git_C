/*Escreva um programa que leia um número inteiro positivo N e imprima os N
primeiros números ímpares positivos.*/

#include <stdio.h>

void main(){
	int n, k, impar = 1;
	printf("Imprimindo numeros impares!\n");
	printf("Digite um numero: ");
	scanf("%d", &n);
	for(k=1;k<=n;k++){	
		printf("%d\n", impar);
		impar += 2;
	}
}
