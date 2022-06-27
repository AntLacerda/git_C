/*Um banco est� realizando uma grande promo��o em seus financiamentos. Ele financia
qualquer valor em 5 presta��es. O valor da primeira presta��o corresponde � 20% do
valor do empr�stimo. Os valores das demais presta��es correspondem ao valor da
parcela anterior acrescido de uma taxa de juros de 7%. Com base nestas informa��es,
escreva um programa que leia o valor a ser financiado por um cliente e calcule: o valor
de cada presta��o, o valor total que o cliente vai pagar pelo empr�stimo e o total de
juros que o cliente vai pagar pelo empr�stimo.*/

#include <stdio.h>
const float taxaJuros = 0.07;
void main(){
	float valorFinanciado;
	printf("Calculando financiamento!\n");
	printf("Digite o valor a ser financiado: ");
	scanf("%f", &valorFinanciado);
	float parcelamento = valorFinanciado / 5;
	float primeiraParcela = parcelamento;
	float segundaParcela = primeiraParcela + (primeiraParcela * taxaJuros);
	float terceiraParcela = segundaParcela + (segundaParcela * taxaJuros);
	float quartaParcela = terceiraParcela + (terceiraParcela * taxaJuros);
	float quintaParcela = quartaParcela + (quartaParcela * taxaJuros);
	float valorTotal = (primeiraParcela + segundaParcela + terceiraParcela + quartaParcela + quintaParcela);
	float juros = valorTotal - valorFinanciado; 
	printf("PRESTACOES\n");
	printf("PRIMEIRA PARCELA: R$%.2f.\n", primeiraParcela);
	printf("SEGUNDA PARCELA: R$%.2f.\n", segundaParcela);
	printf("TERCEIRA PARCELA: R$%.2f.\n", terceiraParcela);
	printf("QUARTA PARCELA: R$%.2f.\n", quartaParcela);
	printf("QUINTA PARCELA: R$%.2f.\n", quintaParcela);
	printf("O valor total do emprestimo eh R$%.2f.\n", valorTotal);
	printf("O valor total do juros eh R$%.2f.", juros);
}

