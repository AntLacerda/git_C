/*Escreva um programa que leia dois números inteiros M e N e um número inteiro X e
imprima todos os divisores exatos de X existentes no intervalo [M, N].*/

#include <stdio.h>

void main(){
	int k, m, n, x, prova=0, resultado=0;
	printf("Divisores!\n");
	printf("Digite um numero: ");
	scanf("%d", &m);
	printf("Digite outro numero: ");
	scanf("%d", &n);
	printf("Digite o numero que quer saber os divisores: ");
	scanf("%d", &x);
	printf("DIVISORES EXATOS DE %d DENTRO DO INTERVALO [%d, %d].\n", x, m, n);
	for(k=m;k<=n;k++){
		prova = k % x;
		if(prova==0){
			printf("%d\n", k);
		}
	}
}
