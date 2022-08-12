/*Em um determinado concurso público, para cada questão que um candidato acerta
ele ganha 5 pontos, para cada questão que ele erra ele perde 3 pontos e para cada
questão que ele deixa em branco ele não ganha e nem perde pontos. Escreva um
programa que leia o número de questões que um candidato acertou, o número de
questões que ele errou e o número de questões que ele deixou em branco e
determine a sua pontuação final. A pontuação deve ser calculada através de um
subprograma, que deve receber como entrada o número de questões certas, o
número de questões erradas e o número de questões em branco. */

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
