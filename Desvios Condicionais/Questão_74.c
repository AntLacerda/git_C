/*Escreva um programa que leia tr�s n�meros distintos e identifique o n�mero que n�o
� nem o menor e nem o maior n�mero.*/

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
