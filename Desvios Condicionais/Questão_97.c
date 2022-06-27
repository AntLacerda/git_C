/*Escreva um programa que leia as horas, os minutos e o fuso hor�rio e converta o
hor�rio lido para o fuso hor�rio informado. O fuso hor�rio deve ser informado como
um n�mero inteiro. Caso o valor seja positivo, o programa deve considerar que o fuso
hor�rio digitado � maior do que o atual. Caso o valor seja negativo, o programa deve
considerar que o fuso hor�rio � menor do que o atual. Caso o valor seja 0, o programa
deve considerar que o fuso hor�rio � o mesmo do atual. A resposta do programa deve
ser dada no formato hh:mm hs. Por exemplo, se o hor�rio lido foi 10 h e 30 min e o
fuso hor�rio for 4, a resposta do programa deve ser 14:30 hs. Por outro lado, se o
hor�rio lido foi 10 h e30 min e o fuso hor�rio for -4, a resposta do programa deve ser
06:30 hs. Se o hor�rio lido for 22 h e 30 min e o fuso-hor�rio for 3, a resposta deve ser
01:30 hs. Se o hor�rio lido for 2 h e 30 min e o fuso hor�rio for -3, a resposta deve ser
23:30 hs. O hor�rio referente � meia-noite deve ser representado da forma 00:00 hs.*/

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
