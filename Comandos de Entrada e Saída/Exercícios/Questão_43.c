/*Escreva um programa que leia o pre�o atual de uma a��o e o seu pre�o anterior e
calcule a sua varia��o em termos percentuais. Por exemplo, se o pre�o atual for R$
10,00 e o pre�o anterior era R$ 5,00 a varia��o foi de 100%.*/

#include <stdio.h>

void main(){
	float preco_atual, preco_antigo, diferenca;
	printf("Digite o preco atual do produto: ");
	scanf("%f", &preco_atual);
	printf("Digite o preco antigo do produto: ");
	scanf("%f", &preco_antigo);
	diferenca = preco_atual - preco_antigo;
	float porcentagem = (diferenca * 100) / preco_atual;
	printf("A diferenca equivale a %.1f%%.", porcentagem);
}

