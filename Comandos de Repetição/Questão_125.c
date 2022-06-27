/*Escreva um programa que leia um número inteiro positivo N e imprima os N primeiros
números perfeitos.*/

#include <stdio.h>

void main(){
	int num, k=0, i, divisor, contador1=0, soma=0;
	printf("Identificando numeros perfeitos!\n");
	printf("Informe a quantidade de numeros perfeitos: ");
	scanf("%d", &num);
	while(contador1!=num){
		k++;
		for(i=1;i<=k;i++){
			divisor = k % i;
			if(divisor==0&&k!=i){
				soma+=i;
			}	
		}
		if(soma==k){
			printf("%d ", k);
			contador1++;
		}
		soma = 0;
	}
}
