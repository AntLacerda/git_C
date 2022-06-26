/*Escreva um programa que leia uma letra minúscula e imprima a sua letra maiúscula
correspondente.*/

#include <stdio.h>
#include <string.h>

void main(){
	char letra; //quando se trata apenas do caractere não precisa colocar os [].
	printf("Deixando a letra maiuscula!\n");
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	char maiuscula = toupper(letra); //função da biblioteca stdio.h responsavel por tornar a letra maiúscula.
	printf("%c", maiuscula); //tolower(); faz o contrário!
}
