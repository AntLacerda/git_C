/*O Banco do Povo est� realizando uma grande promo��o em seus financiamentos. Ele
financia qualquer valor em at� 240 presta��es. O valor da primeira presta��o
corresponde ao valor do empr�stimo dividido pelo n�mero de parcelas. Os valores
das demais presta��es correspondem ao valor da parcela anterior acrescido de uma
taxa de juros de 7%. Escreva um programa que leia o valor a ser financiado por um
cliente e o n�mero de presta��es desejadas e calcule: o valor de cada presta��o, o
valor total que o cliente vai pagar pelo empr�stimo e a diferen�a entre o valor a ser
pago e o valor financiado.*/

#include <stdio.h>
const float juros = 0.07;
void main(){
	int num_parcelas, k;
	float valor_financiado, parcela_atual, valor_total=0;
	printf("Promocao do Banco do Povo!\n");
	printf("Digite o valor a ser financiado: ");
	scanf("%f", &valor_financiado);
	printf("Digite a quantidade de parcelas (max. 240): ");
	scanf("%d", &num_parcelas);
	float primeira_parcela = valor_financiado / num_parcelas;
	printf("1 parcela: R$%.2f.\n", primeira_parcela);
	parcela_atual = primeira_parcela;
	for(k=1;k<=num_parcelas;k++){
		valor_total = valor_total + parcela_atual;
		parcela_atual = parcela_atual + (parcela_atual * juros);
		printf("%d parcela: R$%.2f.\n", k, parcela_atual);
	}
	printf("VALOR TOTAL: R$%.2f.\n", valor_total);
	float diferenca = valor_total - valor_financiado;
	printf("DIFERENCA: R$%.2f.", diferenca);
}
