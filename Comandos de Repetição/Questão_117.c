/*Escreva um programa que leia 10 números inteiros e, para cada número lido, calcule o
seu fatorial.*/

#include <stdio.h>

void main(){
	int k, num, i, resultado=1;
	printf("Calculando o fatorial!\n");
	for(k=1;k<=10;k++){
		printf("Digite um numero: ");
		scanf("%d", &num);
		if(num==0){
			printf("0! = 1.\n");
		}
		else{
			for(i=num;i>=1;i--){
			resultado = resultado * i;	
			}
			printf("%d! = %d.\n", num, resultado);
		}
		resultado = 1;			
	}		
}
