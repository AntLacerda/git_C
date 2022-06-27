/*Escreva um programa em que leia um número inteiro entre 1000 e 9999 e verifique se
o número lido é ou não um palíndromo.*/

#include <stdio.h>

void main(){
	int num;
	printf("Conferindo se o numero eh um palindromo!\n");
	printf("Digite um numero entre 1000 e 9999: ");
	scanf("%d", &num);
	int milesimo = num / 1000;
	int centena = (num % 1000) / 100;
	int dezena = ((num % 1000) % 100) / 10;
	int unidade = ((num % 1000) % 100) % 10;
	int numFinal = (unidade * 1000) + (dezena * 100) + (centena * 10) + (milesimo * 1);
	if(numFinal==num){
		printf("O numero %d eh um palindromo!", num);
	}
	else{
		printf("O numero %d nao eh um palindromo!", num);
	}
}
