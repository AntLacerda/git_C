/*Escreva um programa que leia um número inteiro entre 1 e 10 e imprima o número
lido por extenso.*/

#include <stdio.h>

void main(){
	int num;
	printf("Leitura de numero!\n");
	printf("Digite um numero entre 1 e 10: ");
	scanf("%d", &num);
	switch(num){
		case 1: 
			printf("Um");
			break;
		case 2:
			printf("Dois");
			break;
		case 3: 
			printf("Tres");
			break;
		case 4:
			printf("Quatro");
			break;
		case 5: 
			printf("Cinco");
			break;
		case 6:
			printf("Seis");
			break;
		case 7: 
			printf("Sete");
			break;
		case 8:
			printf("Oito");
			break;
		case 9: 
			printf("Nove");
			break;
		case 10:
			printf("Dez");
			break;
		default:
			printf("Valor invalido!");
	}	
}
