/*Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu
triplo, o seu quadrado, o seu cubo e a sua raiz quadrada.*/

#include <stdio.h>
#include <math.h>

void main(){
	int num;
	printf("Digite um numero: ");
	scanf("%i", &num);
	int dobro = num * 2;
	int triplo = num * 3;
	int quadrado = num * num;
	int cubo = num * num * num;
	int raiz = sqrt(num);
	printf("Dobro: %i.\n", dobro);
	printf("triplo: %i.\n", triplo);
	printf("Quadrado: %i.\n", quadrado);
	printf("Cubo: %i.\n", cubo);
	printf("Raiz Quadrada: %i.\n", raiz);
}
