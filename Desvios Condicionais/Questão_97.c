/*Escreva um programa que leia as horas, os minutos e o fuso horário e converta o
horário lido para o fuso horário informado. O fuso horário deve ser informado como
um número inteiro. Caso o valor seja positivo, o programa deve considerar que o fuso
horário digitado é maior do que o atual. Caso o valor seja negativo, o programa deve
considerar que o fuso horário é menor do que o atual. Caso o valor seja 0, o programa
deve considerar que o fuso horário é o mesmo do atual. A resposta do programa deve
ser dada no formato hh:mm hs. Por exemplo, se o horário lido foi 10 h e 30 min e o
fuso horário for 4, a resposta do programa deve ser 14:30 hs. Por outro lado, se o
horário lido foi 10 h e30 min e o fuso horário for -4, a resposta do programa deve ser
06:30 hs. Se o horário lido for 22 h e 30 min e o fuso-horário for 3, a resposta deve ser
01:30 hs. Se o horário lido for 2 h e 30 min e o fuso horário for -3, a resposta deve ser
23:30 hs. O horário referente à meia-noite deve ser representado da forma 00:00 hs.*/

#include <stdio.h>

void main(){
	int horas, minutos, fuso, horaFinal;
	printf("Ditando a hora correta!\n");
	printf("Digite a hora: ");
	scanf("%d", &horas);
	printf("Digite os minutos: ");
	scanf("%d", &minutos);
	printf("Digite o fuso horario: ");
	scanf("%d", &fuso);
	int horas_em_minutos = horas * 60;	
	int fuso_em_minutos = fuso * 60;
	int tempo_total = horas_em_minutos + fuso_em_minutos;
	int tempo_normal_horas = tempo_total / 60;
	if(tempo_normal_horas>=24){
		horaFinal = tempo_normal_horas - 24;
		printf("Sao %.2d:%.2d hrs!", horaFinal, minutos);	
	}
	else if(tempo_normal_horas<0){
		horaFinal = tempo_normal_horas + 24;
		printf("Sao %d:%d hrs!", horaFinal, minutos);
	}
	else{
		printf("Sao %d:%d hrs!", tempo_normal_horas, minutos);
	}	
}
