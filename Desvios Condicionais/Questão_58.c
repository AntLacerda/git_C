/*Escreva um programa que leia um n�mero inteiro e verifique se ele � par ou �mpar.*/

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
