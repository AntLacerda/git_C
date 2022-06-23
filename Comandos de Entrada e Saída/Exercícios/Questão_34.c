/*Escreva um programa que leia o dia do mês em que o cliente fez uma compra e o
prazo de entrega dado pelo vendedor e calcule o dia do mês (atual ou dos meses
seguintes) em que o cliente deve receber o produto. Para resolver este programa,
considere que cada mês tem exatamente 30 dias.*/

#include <stdio.h>

void main(){
	int diaDoMes, prazoDeEntrega;
	printf("Calculando data de entrega do produto: \n");
	printf("Digite o dia de hoje: ");
	scanf("%d", &diaDoMes);
	printf("Digite o prazo de entrega em dias: ");
	scanf("%d", &prazoDeEntrega);
	int diaDaEntrega = ((diaDoMes + prazoDeEntrega - 1) % 30) + 1;
	printf("Voce recebera o produto no dia %d.", diaDaEntrega);	
}
