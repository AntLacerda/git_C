/*Escreva um programa que leia uma palavra e calcule o seu comprimento.*/

#include <stdio.h>
#include <string.h>

void main(){
	char palavra[40];
	printf("Calculando o tamanho da palavra!\n");
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	int tamanho = strlen(palavra);
	printf("A palavra possui %d caracteres.", tamanho);
}
