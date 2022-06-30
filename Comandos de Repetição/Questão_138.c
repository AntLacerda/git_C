/*Escreva um programa que leia um número inteiro positivo e calcule a soma de todos
os seus algarismos.*/

#include <stdio.h>

void main(){
	int reserva, num, k, resto=0, soma=0;
	printf("Somando os algarismos!\n");
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &num);
	reserva = num;
	do{
		resto = num % 10;
		soma = soma + resto;
		num = num / 10;
	}while(num>0);
	printf("A soma dos algarismos de %d eh %d.", reserva, soma);
}
