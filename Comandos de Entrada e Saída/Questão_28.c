/*Uma loja oferece tr�s formas de pagamento para os seus clientes. Caso a compra seja
paga � vista, a loja oferece um desconto de 10%. Caso a compra seja paga em tr�s
parcelas no cart�o de cr�dito, o cliente paga o pre�o original (sem descontos, mas sem
juros) da compra. Caso a compra seja paga em dez parcelas no cart�o de cr�dito, a loja
acrescenta uma taxa de juros de 20% sobre o valor da compra. Todas as dez parcelas
t�m exatamente o mesmo valor. Com base nessas informa��es, escreva um programa
que leia o valor da compra de um cliente e informe: o valor da compra se ela for paga
� vista, o valor de cada parcela se a compra for paga no cart�o e em tr�s parcelas (por exemplo, 3 parcelas de R$ 50,00) e o valor de cada parcela se a compra for paga com o
cart�o de cr�dito e em dez parcelas.*/

#include <stdio.h>

void main(){
	float valor;
	printf("Calculando o valor final da compra!\n");
	printf("Digite o valor da sua compra: ");
	scanf("%f", &valor);
	float aVista = valor * (10 / 100.0);
	float valorAVista = valor - aVista;
	float tresVezes = valor / 3;
	float juros = valor * (20 / 100.0);
	float valorParcelado = (valor + juros) / 10;
	printf("FORMAS DE PAGAMENTO\n");
	printf("A VISTA: %.2f\n", valorAVista);
	printf("PARCELADO EM 3X: 3 parcelas de R$ %.2f\n", tresVezes);
	printf("PARCELADO EM 10X: 10 parcelas de R$ %.2f\n", valorParcelado);	
}
