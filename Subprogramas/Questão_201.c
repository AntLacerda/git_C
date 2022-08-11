/*Escreva um programa que leia o número inteiro positivo e calcule o seu dobro, o seu
triplo, o seu quadrado, o seu cubo e a sua raiz quadrada. Cada uma das informações
solicitadas deve ser calculada através de um subprograma.*/

#include <stdio.h>
#include <math.h>

int dobro(int num){
	int resultado = num * 2;
	return resultado;
}

int triplo(int num){
	int resultado = num * 3;
	return resultado;
}

int quadrado(int num){
	int resultado = num * num;
	return resultado;
}

int cubo(int num){
	int resultado = num * num * num;
	return resultado;
}

int raiz(int num){
	int resultado = sqrt(num);
	return resultado; 
}

void main(){
	int numero;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	int res_dobro = dobro(numero);
	int res_triplo = triplo(numero);
	int res_quadrado = quadrado(numero);
	int res_cubo = cubo(numero);
	int res_raiz = raiz(numero);
	printf("Dobro: %d\nTriplo: %d\nQuadrado: %d\nCubo: %d\nRaiz: %d\n", res_dobro, res_triplo, res_quadrado, res_cubo, res_raiz);
}
