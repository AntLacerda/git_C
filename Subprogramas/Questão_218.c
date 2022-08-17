/*Escreva um programa que leia um valor em segundos e converta para a forma X
horas Y minutos e Z segundos. Por exemplo, o valor 3670 equivale a 1 hora 1 minutos
e 10 segundos. O programa deve ter: um subprograma para calcular o valor das
horas, um subprograma para calcular o valor dos , um subprograma para calcular o
valor dos segundos e um subprograma para imprimir o resultado final.*/

#include <stdio.h>

int horas(int segundos){
	int resp = segundos / 3600;
	return resp;
}

int minutos(int segundos){
	int resp = (segundos%3600)/60;
	return resp;
}

int segundo(int segundos){
	int resp = (segundos%3600)%60;
	return resp;
}

void main(){
	int segundos;
	printf("Digite a quantidade de segundos: ");
	scanf("%d", &segundos);
	int ho = horas(segundos);
	int mi = minutos(segundos);
	int se = segundo(segundos);
	printf("%d horas %d minutos %d segundos", ho, mi, se);
	
}
