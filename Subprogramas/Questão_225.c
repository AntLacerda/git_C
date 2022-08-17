/*Escreva um programa que leia dois números inteiros M e N e verifique se N é
múltiplo de M. Esta verificação deve ser realizada através de um subprograma.*/

#include <stdio.h>

void multiplo(int m, int n){
	int k, aux, cont=0;
	for(k=1;k<n;k++){
		aux = m * k;
		if(aux==n){
			cont++;
		}	
	}
	if(cont>0){
		printf("O numero %d eh multiplo de %d", n, m);
	}
	else{
		printf("O numero %d nao eh multiplo de %d", n, m);
	}
}

void main(){
	int m, n;
	printf("Digite um numero m: ");
	scanf("%d", &m);
	printf("Digite um numero n: ");
	scanf("%d", &n);
	multiplo(m, n);
}
