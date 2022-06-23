/*Escreva um programa que leia um valor em segundos e converta para a forma X horas
Y minutos e Z segundos. Por exemplo, o valor 3670 equivale a 1 hora 1 minutos e 10
segundos.*/

#include <stdio.h>

void main(){
	int tempoTotal;
	printf("Convertendo em tempo comum!\n");
	printf("Digite o tempo em segundos: ");
	scanf("%d", &tempoTotal);
	int hora = tempoTotal / 3600;
	int minuto = (tempoTotal % 3600) / 60;
	int segundo = (tempoTotal % 3600) % 60;
	printf("Tempo total: %d horas %d minutos %d segundos.", hora, minuto, segundo);	
}
