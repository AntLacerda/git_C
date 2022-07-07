/*Escreva um programa que leia vários itens de uma compra feita pelo usuário. Para
cada item, o usuário deve informar o seu nome, o seu preço unitário e a quantidade
comprada. Após cada leitura, o programa deve perguntar ao usuário se ele deseja
adicionar um novo item ou fechar a conta. O programa deve considerar que o
usuário irá digitar pelo menos um item. Após terminar a leitura, o programa deve
mostrar o valor da conta à vista e o valor da conta a prazo. O valor da conta a prazo
corresponde à soma do valor total de cada item digitado pelo usuário. O valor da
conta à vista corresponde ao valor da conta a prazo com um desconto de 15%.*/

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
