/*Escreva um programa que leia o valor do lado de um quadrado e calcule a sua �rea e o
seu per�metro.*/

#include <stdio.h>

void main(){
	int lado;
	printf("Digite o valor do lado: ");
	scanf("%i", &lado);
	int area = lado * lado;
	int perimetro = lado * 4; 
	printf("A area do quadrado eh %i.\n", area);
	printf("O perimetro do quadrado eh %i.", perimetro);	
}
