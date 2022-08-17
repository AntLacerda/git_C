/*Escreva um programa que leia o valor de uma distância em metros e calcule o seu
valor correspondente em quilômetros, hectômetros, decâmetros, centímetros,
decímetros e milímetros. O programa deve ter um subprograma para converter para
cada unidade de medida*/

#include <stdio.h>

float m_p_km(int distancia){
	float res = (float)distancia / 1000;
	return res;
}

float m_p_hec(int distancia){
	float res = (float)distancia / 100;
	return res;
}

float m_p_dec(int distancia){
	float res = (float)distancia / 10;
	return res;
}

float m_p_decim(int distancia){
	float res = distancia * 10;
	return res;
}

float m_p_cent(int distancia){
	float res = distancia * 100;
	return res;
}

float m_p_mili(int distancia){
	float res = distancia * 1000;
	return res;
}

void main(){
	int metros;
	printf("Digite a distancia em metros: ");
	scanf("%d", &metros);
	float km = m_p_km(metros);
	float hec = m_p_hec(metros);
	float dec = m_p_dec(metros);	
	float decim = m_p_decim(metros);
	float cent = m_p_cent(metros);
	float mili = m_p_mili(metros);
	printf("KM: %f\nHEC: %f\nDEC: %f\nDECIM: %f\nCENT: %f\nMILI: %f.", km, hec, dec, decim, cent, mili);

}
