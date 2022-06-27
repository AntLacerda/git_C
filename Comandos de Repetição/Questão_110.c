/*Escreva um programa que leia um número natural N e calcule o seu fatorial.*/

#include <stdio.h>

void main(){
	int num, k, fatorial=1;
	printf("Calculando o fatorial!\n");
	printf("Digite um numero pertencente ao conjunto dos naturais: ");
	scanf("%d", &num);
	if(num==0){
		printf("%d! = 1.");
	}
	else{
		for(k=1;k<=num;k++){
		fatorial *= k;
		}
		printf("%d! = %d.", num, fatorial);	
	}
}
