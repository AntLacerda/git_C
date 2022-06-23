/*Uma revendedora de veículos resolveu fazer uma promoção em seus veículos. Nesta
revendedora, o preço de um veículo é calculado através do seu preço de compra, mais
uma taxa de 20% de IPI, 17% de ICMS e uma margem de lucro de 20%. Nesta
promoção, a revendedora resolveu tirar o valor do IPI. Com base nestas informações,
escreva um programa que leia o preço atual de um veículo e calcule qual deve ser o
seu preço na promoção.*/

#include <stdio.h> //conferir com fábio
const float ipi = 0.2;
const float icms = 0.17;
const float lucro = 0.2;
void main(){
	float precoVeiculo;
	printf("Preco promocional do veiculo!\n");
	printf("Digite o valor do vaiculo: ");
	scanf("%f", &precoVeiculo);
	float desconto = precoVeiculo * ipi;
	float precoFinal = precoVeiculo - desconto;
	printf("O carro tera valor final de R$%.2f.", precoFinal);
}
