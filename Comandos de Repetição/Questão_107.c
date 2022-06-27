/*Escreva um programa que leia dois números inteiros M e N e calcule a média
aritmética dos números primos do intervalo [M, N].*/

#include <stdio.h>

void main(){
	int m, n, k, i, soma=0, contador=0, divisor=1, prova, contador2=0;
	printf("Media dos numeros primos!\n");
	printf("Digite um numero: ");
	scanf("%d", &m);
	printf("Digite outro numero: ");
	scanf("%d", &n);
	for(k=m;k<=n;k++){
		for(i=1;i<=k;i++){
			prova = k % i;
			if(prova==0){
				contador++;
			}
		}
		if(contador==2){
			soma += k;
			contador2++;
		}
		contador = 0;
	}
	float mediaFinal = (float)soma / contador2;
	printf("A media eh %.1f!", mediaFinal);
}


