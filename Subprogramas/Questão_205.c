/*Escreva um programa que leia o valor de uma distância percorrida em km e o tempo
gasto em horas e calcule a velocidade média em m/s. A conversão deve ser realizada
através de um subprograma.*/

#include <stdio.h>

float km_para_m(int km){
	float resp = km * 1000;
	return resp;
}

float hora_para_segundo(int horas){
	float resp = horas * 3600;
	return resp;
}

float velocidade_media(float km, float horas){
	float valor_metros = km_para_m(km);
	float valor_segundos = hora_para_segundo(horas);
	float velo_media = valor_metros/valor_segundos;
	return velo_media;
}

void main(){
	float valor_km, valor_horas;
	printf("Digite a distancia em KM: ");
	scanf("%f", &valor_km);
	printf("Digite o tempo em Horas: ");
	scanf("%f", &valor_horas);	
	float vel_media = velocidade_media(valor_km, valor_horas);
	printf("A velocidade media eh %.2f", vel_media);
}
