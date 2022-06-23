/*Escreva um programa que leia o número total de questões existentes em uma prova e
o número de questões que um candidato acertou e determine o seu percentual de
acertos e o seu percentual de erros.*/

#include <stdio.h>

void main(){
	int qTotal, qCertas;
	printf("Determinando o percentual de erros e acertos!\n");
	printf("Digite a quantidade de questoes: ");
	scanf("%d", &qTotal);
	printf("Digite a quantidade de acertos: ");
	scanf("%d", &qCertas);
	int pCertas = (100 * qCertas) / qTotal;
	int pErradas = 100 - pCertas;
	printf("O candidato acertou %d%% da prova e errou %d%%!", pCertas, pErradas);	
}
