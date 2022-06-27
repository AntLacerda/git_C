/*Escreva um programa que leia dois operandos inteiros e um operador (+, -, *, /) e
aplique o operador lido aos dois operandos, na ordem em que os mesmos foram
digitados.*/

#include <stdio.h>

void main(){
	int num1, num2, resultado = 0;
	char operador;
	printf("Calculadora improvisada!\n");
	printf("Digite um valor: ");
	scanf("%d", &num1);
	printf("Digite um segundo valor: ");
	scanf("%d", &num2);
	fflush(stdin);
	printf("Digite a operacao que quer realizar (+,-,*,/): ");
	scanf("%c", &operador);
	switch(operador){
		case '+':
			resultado = num1 + num2;
			printf("%d + %d = %d", num1, num2, resultado);
			break;
		case '-':
			resultado = num1 - num2;
			printf("%d - %d = %d", num1, num2, resultado);
			break;
		case '*':
			resultado = num1 * num2;
			printf("%d * %d = %d", num1, num2, resultado);
			break;
		case '/':
			if(num2==0){
				printf("Nao existe divisao por zero!");
				break;
			}
			resultado = num1 / num2;
			printf("%d / %d = %d", num1, num2, resultado);
			break;
		default:
			printf("Operacao invalida!");
	}
}
