/*Escreva um programa que leia um n�mero inteiro positivo e calcule o n�mero de
algarismos deste n�mero.*/

#include <stdio.h>

void main(){
	int num, k=0, reserva;
	printf("Contando a quantidade de algarismos!\n");
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &num);
	reserva = num;
	do{
		num = num / 10;
		k++;
	}while(num>0);
	printf("O numero %d tem %d algarismos.", reserva, k);
}
