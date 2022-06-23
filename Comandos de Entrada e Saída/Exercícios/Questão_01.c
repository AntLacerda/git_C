/* Escreva um programa que leia três números e calcule a sua média aritmética.*/

#include <stdio.h>

void main(){
	int nota1, nota2, nota3;
	printf("Digite tres notas: \n");
	printf("Primeira Nota: ");
	scanf("%i", &nota1);
	printf("Segunda Nota: ");
	scanf("%i", &nota2);
	printf("Terceira Nota: ");
	scanf("%i", &nota3);
	float soma = nota1 + nota2 + nota3;
	float media = soma / 3;
	printf("A media aritmetica das notas eh %.2f", media);
}
