/*Escreva um programa que leia v�rias palavras e, para cada palavra lida, determine o
seu n�mero de letras. O processamento dever� ser encerrado quando forem lidas duas
palavras de cinco letras.*/

#include <stdio.h>

void main(){
	int quantidade=0, contador=0;
	char palavra[30];
	printf("Quantidade de letras de uma palavra!\n");
	while(contador!=2){
		printf("Digite uma palavra: ");
		gets(palavra);
		fflush(stdin);
		quantidade = strlen(palavra);
		printf("A palavra %s tem %d letras.\n", palavra, quantidade);
		if(quantidade==5){
			contador++;
		}		
	}
	printf("Obrigado por participar!");
}
