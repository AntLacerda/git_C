/*Em um determinado concurso p�blico, para cada quest�o que um candidato acerta
ele ganha 5 pontos, para cada quest�o que ele erra ele perde 3 pontos e para cada
quest�o que ele deixa em branco ele n�o ganha e nem perde pontos. Escreva um
programa que leia o n�mero de quest�es que um candidato acertou, o n�mero de
quest�es que ele errou e o n�mero de quest�es que ele deixou em branco e
determine a sua pontua��o final. A pontua��o deve ser calculada atrav�s de um
subprograma, que deve receber como entrada o n�mero de quest�es certas, o
n�mero de quest�es erradas e o n�mero de quest�es em branco. */

#include <stdio.h>
const int certa = 5;
const int errada = -3;
const int branca = 0;

int conferencia(int acertos, int erros, int brancas){
	int resp = (acertos*certa) + (erros*errada) + (brancas*branca);
	return resp;
}

void main(){
	int q_certa, q_errada, q_branco;
	printf("Digite a quantidade de questoes corretas: ");
	scanf("%d", &q_certa);
	printf("Digite a quantidade de questoes erradas: ");
	scanf("%d", &q_errada);
	printf("Digite a quantidade de questoes em branco: ");
	scanf("%d", &q_branco);
	int resultado = conferencia(q_certa, q_errada, q_branco);
	printf("Pontuacao Final: %d", resultado);
}
