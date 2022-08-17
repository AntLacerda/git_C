/*Escreva um programa que leia um número positivo entre 1 e 9999 e calcule o valor
da unidade de milhar, da centena, da dezena e da unidade. O programa deve ter
subprogramas para calcular cada informação solicitada. */

#include <stdio.h>

int milhar(int num){
	int resp = num / 1000;
	return resp;
}

int centena(int num){
	int resp = (num % 1000/100);
	return resp;
}

int dezena(int num){
	int resp = ((num % 1000) % 100)/10;
	return resp;
}

int unidade(int num){
	int resp = ((num%1000)%100)%10;
	return resp;
}

void main(){
	int num;
	printf("Digite um numero entre 1 e 9999: ");
	scanf("%d", &num);
	int num_milhar = milhar(num);
	int num_centena = centena(num);
	int num_dezena = dezena(num);
	int num_unidade	= unidade(num);
	printf("Milhares: %d\nCentenas: %d\nDezenas: %d\nUnidades: %d", num_milhar, num_centena, num_dezena, num_unidade);
	
}
