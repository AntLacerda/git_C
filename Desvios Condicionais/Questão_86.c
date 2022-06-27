/*Escreva um programa que leia um caractere e verifique se o mesmo é uma letra
maiúscula, uma letra minúscula, um numeral ou nenhum dos tipos anteriores. */

#include <stdio.h>

void main(){
	char caractere;
	printf("Digite um caractere maiusculo, minusculo ou numeral: ");
	scanf("%c", &caractere);
	int valor = (int)caractere;
	printf("%c", caractere);
	if(valor>=65&&valor<=90){
		printf("O caractere digitado (%c) esta maiusculo!", caractere);
	}
	else if(valor>=97&&valor<=122){
		printf("O caractere digitado (%c) esta minusculo!", caractere);
	}
	else if(valor>=48&&valor<=57){
		printf("O caractere digitado (%c) eh um numeral!", caractere);
	}
	else{
		printf("O caractere digitado nao eh letra nem numeral!");
	}
}
