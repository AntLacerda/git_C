/*Escreva um programa que leia o preço atual de uma ação e o seu preço anterior e
calcule a sua variação em termos percentuais. Por exemplo, se o preço atual for R$
10,00 e o preço anterior era R$ 5,00 a variação foi de 100%.*/

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

