/*Escreva um programa que leia uma letra min�scula e imprima a sua letra mai�scula
correspondente.*/

#include <stdio.h>
#include <string.h>

void main(){
	char letra; //quando se trata apenas do caractere n�o precisa colocar os [].
	printf("Deixando a letra maiuscula!\n");
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	char maiuscula = toupper(letra); //fun��o da biblioteca stdio.h responsavel por tornar a letra mai�scula.
	printf("%c", maiuscula); //tolower(); faz o contr�rio!
}
