/*Escreva um programa que leia dois números inteiros M e N e calcule os N primeiros
números primos maiores ou iguais a M.*/

#include <stdio.h>

void main(){
	int m, n, k, i, j, divisor=0, contador1=0, contador2=0;
	printf("Calculando os M primeiros numeros primos maiores ou iguais a M!\n");
	printf("Digite um numero (M): ");
	scanf("%d", &m);
	printf("Digite um numero (N): ");
	scanf("%d", &n);
	for(k=1;k<=n;k++){
		for(i=1;i>0;i++){
			for(j=1;j<=i;j++){
				divisor = i % j;
				if(divisor==0){
					contador1++;
				}
			}
			if(contador1==2){
				if(i>=m){
					printf("%d ", i);
					contador2++;
				}		
			}
			contador1 = 0;
			if(contador2==n){
				break;
			}
		}
	}
}

/*

M = 5 - Inicio da contagem
N = 5 - Quantidade de num primos

R: 5, 7, 11, 13, 17.
*/
