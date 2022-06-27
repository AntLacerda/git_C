/*Escreva um programa que leia uma palavra e um número inteiro k e identifique a késima letra da palavra informada pelo usuário.*/

#include <stdio.h>
#include <string.h>

void main(){
	char palavra[100];
	int num;
	printf("Selecionando caractere na palavra!\n");
	printf("Digite uma palavra: ");
	gets(palavra);
	fflush(stdin);
	printf("Digite a posicao desejada: ");
	scanf("%d", &num);
	char caractere = palavra[num - 1];
	printf("Caractere selecionado: %c", caractere);
}
