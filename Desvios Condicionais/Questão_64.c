/*Escreva um programa que leia um n�mero inteiro e verifique se ele � positivo,
negativo ou neutro.*/

#include <stdio.h>

void main(){
	int num;
	printf("Conferindo o sinal!\n");
	printf("Digite um numero: ");
	scanf("%d", &num);
	if(num>0){
		printf("%d eh positivo.", num);
	}
	else if(num<0){
		printf("%d eh negativo.", num);
	}
	else{
		printf("%d eh neutro.", num);
	}
}
