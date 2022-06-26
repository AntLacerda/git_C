/*Uma financeira está oferecendo uma nova modalidade de empréstimo para os seus
clientes. Nesta modalidade, o cliente pode pagar o valor financiado em até 120
parcelas, todas as parcelas com o mesmo valor. O valor de cada parcela corresponde
ao valor do empréstimo dividido pelo número de parcelas, mais uma taxa de 4% sobre
o valor total financiado. Com base nestas informações, escreva um programa que leia
um valor a ser financiado pelo cliente e o número de parcelas desejadas e calcule o
valor de cada parcela e o valor total que o cliente pagará pelo empréstimo.*/

#include <stdio.h>
const float taxa = 0.04;
void main(){
	float valorFinanciado; 
	int numParcelas;
	printf("Calculando o financiamento!\n");
	printf("Digite o valor a ser financiado: ");
	scanf("%f", &valorFinanciado);
	printf("Digite a quantidade de parcelas (até 120 parcelas): ");
	scanf("%d", &numParcelas);
	float valorParcela = (valorFinanciado / numParcelas) + (valorFinanciado * taxa);
	float valorTotal = valorParcela * numParcelas;
	printf("O valor da parcela sera de R$%.2f.\n", valorParcela);
	printf("O valor total do emprestimo eh de R$%.2f.", valorTotal);
}
