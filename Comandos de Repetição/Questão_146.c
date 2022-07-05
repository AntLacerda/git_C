/*Escreva um programa que leia dois números inteiros M e N e calcule os valores de M
div(/) N e M mod(%) N. Os valores devem ser calculados sem o uso dos operadores div e
mod.*/


#include <stdio.h>

void main(){
	int m, n, subtracao, divisor=0;
	printf("Calculando divisao e resto sem os operadores comuns!\n");
	printf("Digite um numero [m]: ");
	scanf("%d", &m);
	printf("Digite um numero [n]: ");
	scanf("%d", &n);
	subtracao = m;
	if(n>m){
		printf("Divisor: 0\n");
		printf("Resto: %d", m);
	}
	else{
		if(n==1){
				printf("Divisor: %d\n", m);
				printf("Resto: 0");
		}
		else{
			while(subtracao!=0&&subtracao!=1){
				subtracao = subtracao - n;
				divisor++;
			}	
			printf("Divisor: %d\n", divisor);
			printf("Resto: %d", subtracao);	
		}
	}
}
