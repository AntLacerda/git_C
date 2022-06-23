/*Escreva um programa que leia a quantidade de horas trabalhadas por um funcionário
de uma empresa durante um mês e o valor de cada hora trabalhada e determine o seu
pagamento. O programa deve considerar que a carga-horária mensal do funcionário é
de 160 horas e que o valor de cada hora extra corresponde ao valor da hora
trabalhada acrescido de uma taxa de 50%. Para resolver a questão, considere que a
quantidade de horas trabalhadas nunca será inferior a 160.*/

#include <stdio.h>
const int totalHorasMes = 160;
const float acrescimo = 0.5;
void main(){
	int horas, valor;
	printf("Determinando o pagamento do mes!\n");
	printf("Digite a quantidade de horas trabalhadas: ");
	scanf("%d", &horas);
	printf("Digite o valor da hora trabalhada: ");
	scanf("%d", &valor);
	int valorTotalNormal = totalHorasMes * valor;
	int horasExtras = horas - totalHorasMes;
	int valorExtra = horasExtras * (valor + (valor * acrescimo));
	int valorFinal = valorTotalNormal + valorExtra;
	printf("O salario final eh R$%d,00.", valorFinal);
}
