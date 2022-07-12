/*O IFPB precisa de um programa que fa�a a corre��o autom�tica das provas do seu
teste de sele��o. A prova, que � a mesma para todos os alunos, consiste de dez
quest�es objetivas, cuja resposta deve ser (a, b, c, d ou e). O programa deve ler o
gabarito da prova e, a seguir, o nome de um candidato e as op��es que aparecem no
seu cart�o de respostas. Para cada candidato, o programa deve imprimir o seu
percentual de acertos. O processamento deve ser encerrado quando for encontrado
um candidato com o nome �fim�, que n�o deve ser processado. O programa deve
imprimir tamb�m a pontua��o m�dia dos candidatos.*/

#include <stdio.h>
#include <string.h>

void main(){
	int k, contador=0, contador2=0, total;
	float media;
	char gabarito[10], candidato[20], alternativas[10];
	printf("Correcao das provas!\n");
	printf("Digite o gabarito: \n");
	for(k=0;k<10;k++){
		printf("%d questao: \n", k+1);
		scanf("%c", &gabarito[k]);
		fflush(stdin);
	}
	printf("Digite o nome do candidato e suas alternativas: \n");
	do{
		printf("Candidato: ");
		gets(candidato);
		fflush(stdin);
		if(strcmp(candidato, "fim")!=0){
			for(k=0;k<10;k++){
				printf("%d questao: \n", k+1);
				scanf("%c", &alternativas[k]);
				fflush(stdin);
				if(gabarito[k]==alternativas[k]){
					contador++;
				}
			}
			printf("Candidato: %s\n", candidato);
			printf("Nota: %d%%\n", contador * 10);
			total = total + contador;
			contador2++;
			contador = 0;
		}
	}while(strcmp(candidato, "fim")!=0);
	printf("Media dos candidatos: ");
	printf("%.2f", (float)total / contador2);
}
