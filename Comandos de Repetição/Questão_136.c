/*Escreva um programa que leia um n�mero inteiro positivo N e calcule o seu valor
correspondente em bin�rio.*/

#include <stdio.h>

void main(){
	int reserva, resto, num, k=1, valor=0;
	printf("Calculado de decimal para bin�rio!\n");
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	reserva = num;
	do{
		resto = num % 2;
		valor = valor + (resto * k);
		num = num / 2;
		k = k * 10;
	}while(num!=0);
	printf("O numero %d eh %d em binario.", reserva, valor);
}
