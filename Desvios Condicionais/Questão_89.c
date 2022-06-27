/*Escreva um programa que leia um número inteiro entre 1 e 999 e calcule o seu valor
correspondente em algarismos romanos.*/

#include <stdio.h>

void main(){
	int num;
	char romano[40];
	printf("Transformando o numero decimal em romano!\n");
	printf("Digite um numero decimal entre 1 e 999: ");
	scanf("%d", &num);
	fflush(stdin);
	int centena = num / 100;
	int dezena = (num % 100) / 10;
	int unidade = (num % 100) % 10;
	switch(centena){
		case 1:
			printf("C");
			break;
		case 2: 
			printf("CC");
			break;
		case 3:
			printf("CCC");
			break;
		case 4:
			printf("CD");
			break;
		case 5:
			printf("D");
			break;
		case 6:
			printf("DC");
			break;
		case 7:
			printf("DCC");
			break;
		case 8:
			printf("DCCC");
			break;
		case 9:
			printf("CM");
	}
	
	switch(dezena){
		case 1:
			printf("X");
			break;
		case 2: 
			printf("XX");
			break;
		case 3:
			printf("XXX");
			break;
		case 4:
			printf("XL");
			break;
		case 5:
			printf("L");
			break;
		case 6:
			printf("LX");
			break;
		case 7:
			printf("LXX");
			break;
		case 8:
			printf("LXXX");
			break;
		case 9:
			printf("XC");
	}
	
	switch(unidade){
		case 1:
			printf("I");
			break;
		case 2: 
			printf("II");
			break;
		case 3:
			printf("III");
			break;
		case 4:
			printf("IV");
			break;
		case 5:
			printf("V");
			break;
		case 6:
			printf("VI");
			break;
		case 7:
			printf("VII");
			break;
		case 8:
			printf("VIII");
			break;
		case 9:
			printf("IX");
	}
}
