/*Escreva um programa que leia o valor do lado de um quadrado e calcule a sua �rea e
o seu per�metro. O programa deve ter um subprograma para calcular a �rea e outro
para calcular o per�metro.*/

#include <stdio.h>

int area_quadrado(int lado){
	int resultado = lado * lado;
	return resultado;
}

int perimetro_quadrado(int lado){
	int resultado = lado * 4;
	return resultado;
}

void main(){
	int lado_quadrado;
	printf("Informe o lado do quadrado: ");
	scanf("%d", &lado_quadrado);
	int area = area_quadrado(lado_quadrado);
	int perimetro = perimetro_quadrado(lado_quadrado);	
	printf("A area do quadrado eh %d.\n", area);
	printf("O perimetro do quadrado eh %d.", perimetro);
}
