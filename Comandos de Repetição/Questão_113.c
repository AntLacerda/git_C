/*Escreva um programa que leia dois números inteiros M e N e imprima todos os
números primos existentes no intervalo [M, N].*/

#include <stdio.h>

void main(){
	int m, n, k, i, teste, primo, contador=0;
	printf("Numeros primos do intervalo!\n");
	printf("Digite um numero para ser o inicio do intervalo: ");
	scanf("%d", &m);
	printf("Digite outro numero para ser o final do intervalo: ");
	scanf("%d", &n);
	if(m==1&&n==1){
		printf("Numeros invalidos!");
	}
	for(k=m;k<=n;k++){
		for(i=1;i<=k;i++){
			teste = k % i;
			if(teste==0){
				contador++;
			}		
		}
		if(contador==2){
				printf("%d\n", k);
			}
		contador = 0;
	}
}
