/*Escreva um programa que leia dois números inteiros M e N e calcule o valor de M elevado a N
potenciação deve ser calculada através de um comando de repetição, sem a utilização
de qualquer função oferecida pela linguagem de programação. */

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
