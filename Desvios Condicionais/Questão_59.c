/*Escreva um programa que leia dois números e determine se o segundo número é
menor, igual ou maior que o primeiro.*/

#include <stdio.h>

void main(){
	int num1, num2;
	printf("Comparacao de numeros!\n");
	printf("Digite um numero: ");
	scanf("%d", &num1);
	printf("Digite outro numero: ");
	scanf("%d", &num2);
	if(num2<num1){
		printf("O segundo eh menor que o primeiro!");
	}
	else if(num2>num1){
		printf("O seugundo eh maior que o primeiro!");
	}
	else{
		printf("Os dois numeros sao iguais");
	}	
}
