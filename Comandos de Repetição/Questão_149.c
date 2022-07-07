/*Escreva um programa que leia v�rios itens de uma compra feita pelo usu�rio. Para
cada item, o usu�rio deve informar o seu nome, o seu pre�o unit�rio e a quantidade
comprada. Ap�s cada leitura, o programa deve perguntar ao usu�rio se ele deseja
adicionar um novo item ou fechar a conta. O programa deve considerar que o
usu�rio ir� digitar pelo menos um item. Ap�s terminar a leitura, o programa deve
mostrar o valor da conta � vista e o valor da conta a prazo. O valor da conta a prazo
corresponde � soma do valor total de cada item digitado pelo usu�rio. O valor da
conta � vista corresponde ao valor da conta a prazo com um desconto de 15%.*/

#include <stdio.h>
const float desconto = 0.15;
void main(){
	int parada, quantidade;
	float preco_produto, valor_total;
	float valor_a_vista;
	char nome_produto[30];
	printf("Simulando carrinho de compras!\n");
	while(parada!=1){
		printf("NOME DO PRODUTO: ");
		gets(nome_produto);
		fflush(stdin);
		printf("VALOR DO PRODUTO: ");
		scanf("%f", &preco_produto);
		fflush(stdin);
		printf("QUANTIDADE DO PRODUTO: ");
		scanf("%d", &quantidade);
		fflush(stdin);
		valor_total += preco_produto * quantidade;
		printf("Deseja continuar? Sim[0] Nao[1]: ");
		scanf("%d", &parada);
		fflush(stdin);
	}
	valor_a_vista = (float)valor_total - (valor_total * desconto);
	printf("Valor da conta a prazo: R$%.2f.\n", valor_total);
	printf("Valor da compra a vista: R$%.2f\n.", valor_a_vista);
}
