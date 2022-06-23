/*Escreva um programa que leia o valor de uma distância em metros e calcule o seu
valor correspondente em quilômetros, hectômetros, decâmetros, centímetros,
decímetros e milímetros.*/

#include <stdio.h>
const vDm = 10;
const vCm = 100;
const vMm = 1000;
void main(){
	float dis;
	printf("Convertendo a distancia!\n");
	printf("Digite a distancia em metros: ");
	scanf("%f", &dis);
	float km = dis * 0.001; 
	float hm = dis * 0.01;
	float dam = dis * 0.1;
	int dm = dis * vDm;
	int cm = dis * vCm;
	int mm = dis * vMm;
	printf("\n");
	printf("%.1f EQUIVALE A: \n", dis);
	printf("Km: %.3f\n", km);
	printf("Hm: %.2f\n", hm);
	printf("Dam: %.1f\n", dam);
	printf("Dm: %d\n", dm);
	printf("Cm: %d\n", cm);
	printf("Mm: %d\n", mm);
}
