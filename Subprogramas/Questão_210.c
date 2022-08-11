/*Em uma determinada cidade, cada m2 de um terreno está avaliado em R$ 50,00.
Escreva um programa que leia o comprimento e a largura de um terreno localizado
nesta cidade e calcule o seu valor de mercado. O cálculo deve ser realizado através
de um subprograma, que deve receber como entrada o comprimento e a largura do
terreno.*/

#include <stdio.h>
const int valor_mercado = 50;

int metro_quadrado(int comprimento, int largura){
	int metro_quadrado = comprimento * largura; 
	int valor_final = metro_quadrado * valor_mercado;
	return valor_final;
}

void main(){
	int comp, larg;
	printf("Digite o valor do comprimento: ");
	scanf("%d", &comp);
	printf("Digite o valor da largura: ");
	scanf("%d", &larg);
	int valor_final = metro_quadrado(comp, larg);
	printf("O valor de mercado do terreno eh de R$%d,00.", valor_final);
}
