/*Escreva um programa que leia o preço de produção de um determinado produto e a
margem de lucro desejada pelo fabricante e calcule qual deve ser o seu preço de
venda.*/

#include <stdio.h>

void main(){
	float precoProducao, lucro;
	printf("Calculando o preco do produto!\n");
	printf("Digite o valor de producao: ");
	scanf("%f", &precoProducao);
	printf("Digite o lucro desejado por produto: ");
	scanf("%f", &lucro);
	float precoFinal = precoProducao + lucro;
	printf("O valor final do produto ser R$ %.2f.", precoFinal);	
}
