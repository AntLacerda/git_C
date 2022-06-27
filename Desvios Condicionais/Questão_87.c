/*Escreva um programa que leia um caractere correspondente ao estado civil de uma
pessoa e imprima o estado civil informado por extenso. As opções para o estado civil
são: S (solteiro), C (casado), D (divorciado) e V (viúvo).*/

#include <stdio.h>

void main(){
	char caractere;
	printf("Status Civil!\n");
	printf("Digite a inicial em maiusculo do seu status civil: ");
	scanf("%c", &caractere);
	switch(caractere){
		case 'S': 
			printf("Solteiro!");
			break;
		case 'C':
			printf("Casado!");
			break;
		case 'D':
			printf("Divorciado!");
			break;
		case 'V':
			printf("Viúvo!");
			break; 
		default:
			printf("Valor inválido!");
	}
}
