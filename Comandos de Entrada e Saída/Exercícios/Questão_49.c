/*Uma revendedora de ve�culos resolveu fazer uma promo��o em seus ve�culos. Nesta
revendedora, o pre�o de um ve�culo � calculado atrav�s do seu pre�o de compra, mais
uma taxa de 20% de IPI, 17% de ICMS e uma margem de lucro de 20%. Nesta
promo��o, a revendedora resolveu tirar o valor do IPI. Com base nestas informa��es,
escreva um programa que leia o pre�o atual de um ve�culo e calcule qual deve ser o
seu pre�o na promo��o.*/

#include <stdio.h> //conferir com f�bio
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
