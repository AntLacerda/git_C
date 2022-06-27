/*Escreva um programa que leia um número inteiro N e verifique se ele é um número
primo.*/

#include <stdio.h>

void main(){
	int num, k, divisor, contador=0;
	printf("Numero Primo!\n");
	printf("Digite um numero: ");
	scanf("%d", &num);
	for(k=1;k<=num;k++){
		divisor = num % k;
		if(divisor==0){
			contador++;
		}	
	}
	if(contador==2){
			printf("%d eh um numero primo!", num);
		}
	else{
		printf("%d nao eh um numero primo!", num);
	}
}
