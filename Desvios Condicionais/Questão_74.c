/*Escreva um programa que leia três números distintos e identifique o número que não
é nem o menor e nem o maior número.*/

#include <stdio.h>

void main(){
	int num1, num2, num3;
	printf("Digite um numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &num3);
	if(num1>=num2&&num1<=num3){
		printf("%d nem eh o maior nem o menor numero.", num1);
	}
	else if(num2>=num1&&num2<num3){
		printf("%d nem eh o maior nem o menor numero.", num2);
	}
	else{
		printf("%d nem eh o maior nem o menor numero.", num3);
	}
}
