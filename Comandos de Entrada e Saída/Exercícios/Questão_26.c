/*Escreva um programa que leia o peso e a altura dos atletas das quatro duplas que vão
participar de um torneio de vôlei de praia e calcule o peso e a altura média de cada
dupla e o peso e a altura média de todos os jogadores do torneio.*/

#include <stdio.h>

void main(){
	float pesoA, pesoB, pesoC, pesoD, pesoE, pesoF, pesoG, pesoH;
	float alturaA, alturaB, alturaC, alturaD, alturaE, alturaF, alturaG, alturaH;
	printf("Calculando media de peso e de altura!\n");
	printf("Digite o peso do atleta A: ");
	scanf("%f", &pesoA);
	printf("Digite a altura do atleta A: ");
	scanf("%f", &alturaA);
	printf("Digite o peso do atleta B: ");
	scanf("%f", &pesoB);
	printf("Digite a altura do atleta A: ");
	scanf("%f", &alturaB);
	float mediaPeso_AB = (pesoA + pesoB) / 2;
	float mediaAltura_AB = (alturaA + alturaB) / 2;
	
	printf("Digite o peso do atleta C: ");
	scanf("%f", &pesoC);
	printf("Digite a altura do atleta C: ");
	scanf("%f", &alturaC);
	printf("Digite o peso do atleta D: ");
	scanf("%f", &pesoD);
	printf("Digite a altura do atleta D: ");
	scanf("%f", &alturaD);
	float mediaPeso_CD = (pesoC + pesoD) / 2;
	float mediaAltura_CD = (alturaC + alturaD) / 2;

	printf("Digite o peso do atleta E: ");
	scanf("%f", &pesoE);
	printf("Digite a altura do atleta E: ");
	scanf("%f", &alturaE);
	printf("Digite o peso do atleta F: ");
	scanf("%f", &pesoF);
	printf("Digite a altura do atleta F: ");
	scanf("%f", &alturaF);
	float mediaPeso_EF = (pesoE + pesoF) / 2;
	float mediaAltura_EF = (alturaE + alturaF) / 2;
	
	printf("Digite o peso do atleta G: ");
	scanf("%f", &pesoG);
	printf("Digite a altura do atleta G: ");
	scanf("%f", &alturaG);
	printf("Digite o peso do atleta H: ");
	scanf("%f", &pesoH);
	printf("Digite a altura do atleta H: ");
	scanf("%f", &alturaH);
	float mediaPeso_GH = (pesoG + pesoH) / 2;
	float mediaAltura_GH = (alturaG + alturaH) / 2;
	
	float mediaPeso_Geral = (pesoA + pesoB + pesoC + pesoD + pesoE + pesoF + pesoG + pesoH) / 8;
	float mediaAltura_Geral = (alturaA + alturaB + alturaC + alturaD + alturaE + alturaF + alturaG + alturaH) / 8;
	
	printf("\n");

	printf("EQUIPE 01 - A B\nMedia do peso: %.2f.\nMedia da altura: %.2f.\n\n", mediaPeso_AB, mediaAltura_AB);
	printf("EQUIPE 02 - C D\nMedia do peso: %.2f.\nMedia da altura: %.2f.\n\n", mediaPeso_CD, mediaAltura_CD);
	printf("EQUIPE 03 - E F\nMedia do peso: %.2f.\nMedia da altura: %.2f.\n\n", mediaPeso_EF, mediaAltura_EF);
	printf("EQUIPE 04 - G H\nMedia do peso: %.2f.\nMedia da altura: %.2f.\n\n", mediaPeso_GH, mediaAltura_GH);
}
