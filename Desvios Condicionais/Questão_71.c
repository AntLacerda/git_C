/*Escreva um programa que leia três números inteiros distintos e identifique o maior
número lido.*/

#include <stdio.h>

void main(){
	int num1, num2, num3;
	printf("Identificando o maior numero!\n");
	printf("Digite tres numeros distintos: \n");
	printf("Primeiro numero: ");
	scanf("%d", &num1);
	printf("Segundo numero: ");
	scanf("%d", &num2);
	printf("Terceiro numero: ");
	scanf("%d", &num3);
	if(num1>num2&&num1>num3){
		printf("%d eh o maior numero!", num1);
	}
	else if(num2>num1&&num2>num3){
		printf("%d eh o maior numero!", num2);
	}
	else{
		printf("%d eh o maior numero!", num3);
	}
}
