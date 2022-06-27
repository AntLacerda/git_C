/*Escreva um programa que leia um número inteiro e determine o seu valor absoluto. O
valor absoluto deve ser calculado sem o uso de qualquer função oferecida pela
linguagem. */

#include <stdio.h>

void main(){
	int num;
	printf("Calculando valor absoluto!\n");
	printf("Digite um numero real: ");
	scanf("%d", &num);
	if(num<0){
		int absoluto = num * -1;
		printf("|%d| = %d", num, absoluto);
	}
	else{
		printf("|%d| = %d", num, num);
	}
}
