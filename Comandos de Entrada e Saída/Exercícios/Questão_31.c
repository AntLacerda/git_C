/*Em um determinado concurso p�blico, para cada quest�o que um candidato acerta ele
ganha 5 pontos, para cada quest�o que ele erra ele perde 3 pontos e para cada
quest�o que ele deixa em branco ele n�o ganha e nem perde pontos. Escreva um
programa que leia o n�mero de quest�es que um candidato acertou, o n�mero de
quest�es que ele errou e o n�mero de quest�es que ele deixou em branco e
determine a sua pontua��o final.*/

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
