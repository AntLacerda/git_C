/*O Banco do Povo est� realizando uma grande promo��o em seus financiamentos. Ele
financia qualquer valor em 5 presta��es. O valor da primeira presta��o corresponde
� 20% do valor do empr�stimo. Os valores das demais presta��es correspondem ao
valor da parcela anterior acrescido de uma taxa de juros de 7%. Escreva um
programa que leia o valor a ser financiado por um cliente e calcule: o valor de cada
presta��o, o valor total que o cliente vai pagar pelo empr�stimo e o total de juros
que o cliente vai pagar pelo empr�stimo. O programa deve ter um subprograma para
calcular o valor de cada parcela do empr�stimo. */

#include <stdio.h>

float primeira_parcela(float valor_emprestado){
	float resp = valor_emprestado * 0.2;
	return resp;
}

float segunda_parcela(float valor_emprestado, float primeira_parcela){
	float resp = primeira_parcela * 0.07 + primeira_parcela;
	return resp;	
}

float terceira_parcela(float valor_emprestado, float segunda_parcela){
	float resp = segunda_parcela * 0.07 + segunda_parcela;
	return resp;	
}

float quarta_parcela(float valor_emprestado, float terceira_parcela){
	float resp = terceira_parcela * 0.07 + terceira_parcela;
	return resp;	
}

float quinta_parcela(float valor_emprestado, float quarta_parcela){
	float resp = quarta_parcela * 0.07 + quarta_parcela;
	return resp;	
}

void main(){
	float valor_emprestado;
	printf("Digite o valor a ser emprestado: ");
	scanf("%f", &valor_emprestado);
	float pri_par = primeira_parcela(valor_emprestado);
	float seg_par = segunda_parcela(valor_emprestado, pri_par);
	float ter_par = terceira_parcela(valor_emprestado, seg_par);
	float quar_par = quarta_parcela(valor_emprestado, ter_par);
	float quin_par = quinta_parcela(valor_emprestado, quar_par);
	printf("Primeira parcela: R$%.2f\n", pri_par);
	printf("Segunda parcela: R$%.2f\n", seg_par);
	printf("Terceira parcela: R$%.2f\n", ter_par);
	printf("Quarta parcela: R$%.2f\n", quar_par);
	printf("Quinta parcela: R$%.2f\n", quin_par);
}
