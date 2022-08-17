/*Escreva um programa que leia um número inteiro e verifique se ele é positivo,
negativo ou neutro. Esta verificação deve ser realizada através de um subprograma.*/

#include <stdio.h>

void sinal(int num){
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

void main(){
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	sinal(num);	
}
