/*Escreva um programa que leia um número inteiro e verifique se ele é par ou ímpar.*/

#include <stdio.h>

void main(){
	int num;
	printf("Impar ou Par!\n");
	printf("Digite um numero: ");
	scanf("%d", &num);
	int resto = num % 2;
	if(resto==0){
		printf("O numero %d eh par!", num);
	}
	else{
		printf("O numero %d eh impar!", num);
	}
}
