/*. Escreva um programa que leia o número de pessoas que irão participar de um evento,
no qual será sorteado um prêmio, e, a seguir, leia o nome e o número do bilhete
recebido por cada uma destas pessoas. O programa deve informar o nome do
ganhador do prêmio, que é a pessoa cuja ordem de chegada é igual ao número do seu
bilhete. Para isto, você poder supor que: a ordem de chegada de cada pessoa
corresponde à ordem de leitura dos seus dados; sempre existe uma pessoa cujo
número do bilhete é igual a sua ordem de chegada; este caso acontece para apenas
uma pessoa.*/

#include <stdio.h>
#include <string.h>

void main(){
	int pessoas, k, bilhete;
	char participante[20], aux[20];
	printf("Descobrindo a pessoa sorteada!\n");
	printf("Quantas pessoas participarao do sorteio: ");
	scanf("%d", &pessoas);
	fflush(stdin);
	for(k=1;k<=pessoas;k++){
		printf("Nome: ");
		gets(participante);
		fflush(stdin);
		printf("Bilhete: ");
		scanf("%d", &bilhete);
		fflush(stdin);
		if(bilhete==k){
			strcpy(aux, participante);
		}
	}
	printf("Parabens %s, vc ganhou o sorteio!", aux);
}
