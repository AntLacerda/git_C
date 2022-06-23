/*Um provedor de internet oferece um plano promocional para os seus clientes. Neste
plano, ele paga uma mensalidade de R$ 80,00 e pode acessar até 100 GB de dados.
Caso a quantidade de dados acessados seja superior a este limite, ele deve pagar uma
taxa adicional de R$ 5,00 por cada GB extra acessado. Com base nestas informações,
escreva um programa que leia a quantidade de dados acessados pelo cliente durante
um mês (em GB) e calcule o valor da sua conta, considerando que esta quantidade
nunca é inferior a 100 GB.*/

#include <stdio.h>
const float mensalidade = 80.00;
const int limite = 100;
const float taxaExtra = 5.00;
void main(){
	int qDados;
	printf("Calculando o valor da internet!\n");
	printf("Digite a quantidade de dados acessados em GB: ");
	scanf("%d", &qDados);
	int qDadosExtra = qDados - limite;
	float valorExtra = qDadosExtra * taxaExtra;
	float valorTotal = mensalidade + valorExtra;
	printf("Sua mensalidade eh R$%.2f.", valorTotal);
}
