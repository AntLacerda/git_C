/*Escreva um programa que leia os valores dos tr�s lados de um tri�ngulo e o classifique
como equil�tero, is�sceles ou escaleno*/

#include <stdio.h>

void main(){
	int ladoA, ladoB, ladoC;
	printf("Determinando o tipo de triangulo!\n");
	printf("Digite o lado a do triangulo: ");
	scanf("%d", &ladoA);
	printf("Digite o lado b do triangulo: ");
	scanf("%d", &ladoB);
	printf("Digite o lado c do triangulo: ");
	scanf("%d", &ladoC);
	if(ladoA==ladoB&&ladoB==ladoC){
		printf("O triangulo eh Equilatero!");
	}
	else if(ladoA!=ladoB&&ladoA!=ladoC&&ladoB!=ladoC){
		printf("O triangulo eh Escaleno!");
	}
	else{
		printf("O triangulo eh Isosceles!");
	}
}
