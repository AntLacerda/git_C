/*Escreva um programa que leia o valor de uma distância percorrida em km e o tempo
gasto em horas e calcule a velocidade média em m/s.*/

#include <stdio.h>

void main(){
	float distancia, tempo;
	printf("Calculando a velocidade media.\n");
	printf("Digite a distancia em km: ");
	scanf("%f", &distancia);
	printf("Digite o tempo gasto em horas: ");
	scanf("%f", &tempo);
	float disMetros = distancia * 1000;
	float temMinutos = tempo * 60;
	float temSegundos = temMinutos * 60;
	float velMedia = disMetros / temSegundos;
	printf("A velocidade media eh %.1f m/s", velMedia);
}
