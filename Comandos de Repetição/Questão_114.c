/*Escreva um programa que leia dois n�meros inteiros M e N e calcule o valor de M elevado a N
potencia��o deve ser calculada atrav�s de um comando de repeti��o, sem a utiliza��o
de qualquer fun��o oferecida pela linguagem de programa��o. */

#include <stdio.h>

void main(){
	int m, n, k, resultado=1;
	printf("Calculando a potencia!\n");
	printf("Informe a base: ");
	scanf("%d", &m);
	printf("Informe o expoente: ");
	scanf("%d", &n);
	for(k=1;k<=n;k++){
		resultado = resultado * m;
		printf("%d ", resultado);
	}
}
