/*Escreva um programa que leia os dois últimos valores da leitura de um medidor de
energia em KWh e calcule o valor da conta de energia, considerando que: o preço de 1
KWh é R$ 0,35, o valor da ICMS corresponde à 17% do valor do consumo e a taxa de
iluminação pública é de R$ 15,00.*/

#include <stdio.h>
const float kwh = 0.35;
const float icms = 0.17;
const float taxa = 15.00; 
void main(){
	float penultimoMedidor, ultimoMedidor;
	printf("Calculando o valor da conta de luz!\n");
	printf("Digite o valor em Kwh do penultimo mes: ");
	scanf("%f", &penultimoMedidor);
	printf("Digite o valor em Kwh do ultimo mes: ");
	scanf("%f", &ultimoMedidor);
	float consumoMensal = ultimoMedidor - penultimoMedidor;
	float valorDoConsumo = consumoMensal * kwh;
	float calcIcms = valorDoConsumo * icms;
	float valorFinal = calcIcms + taxa + valorDoConsumo;
	printf("Sua conta de energia deu R$%.2f reais.", valorFinal);
}

