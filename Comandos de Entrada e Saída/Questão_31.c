/*Em um determinado concurso público, para cada questão que um candidato acerta ele
ganha 5 pontos, para cada questão que ele erra ele perde 3 pontos e para cada
questão que ele deixa em branco ele não ganha e nem perde pontos. Escreva um
programa que leia o número de questões que um candidato acertou, o número de
questões que ele errou e o número de questões que ele deixou em branco e
determine a sua pontuação final.*/

#include <stdio.h>
const pCerto = 5; 
const pErrado = 3;
const pBranco = 0;
void main(){
	int qCertas, qErradas, qBrancas;
	printf("Calculando pontuacao final da prova!\n");
	printf("Digite a quantidade de questoes certas: ");
	scanf("%d", &qCertas);
	printf("Digite a quantidade de questoes erradas: ");
	scanf("%d", &qErradas);
	printf("Digite a quantidade de questoes em branco: ");
	scanf("%d", &qBrancas);
	int total = qCertas + qErradas + qBrancas;
	int pontuacao = (qCertas * pCerto) - (qErradas * pErrado) - (qBrancas * pBranco);
	printf("Do total de %d questoes voce obteve %d pontos!", total, pontuacao);
}
