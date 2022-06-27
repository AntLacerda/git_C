/*Escreva um programa que leia um número inteiro N e imprima o enésimo termo da
série de Fibonacci. (1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...).*/

#include <stdio.h>

void main(){
	int num, k;
	printf("Posicao de Fibonacci!\n");
	printf("Digite um numero: ");
	scanf("%d", &num);
	int num1 = 1;
	int num2 = 1;
	if(num==1||num==2){
		printf("1");
	}
	else{
		for(k=1;k<=(num-2);k++){
		num2 = num1 + num2;
		num1 = num2 - num1;
		}
	printf("%d", num2);	
	}
}

