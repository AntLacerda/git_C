/*Escreva um programa que leia um n�mero inteiro positivo N e imprima os N
primeiros n�meros pares positivos.*/

#include <stdio.h>

void main(){
	int n, k, par;
	printf("Imprimindo numeros pares!\n");
	printf("Digite um numero: ");
	scanf("%d", &n);
	for(k=1;k<=n;k++){
		par = k * 2;
		printf("%d\n", par);
	}
}
