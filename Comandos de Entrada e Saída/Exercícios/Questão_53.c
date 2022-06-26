/*Escreva um programa que leia o m�s e o ano em que um preso come�ar� a cumprir a
sua pena e o tamanho da pena (em n�mero de anos e n�mero de meses, por exemplo,
18 anos e 5 meses) e determine o m�s e o ano em que ele terminar� de cumprir a sua
pena. Para resolver esta quest�o, considere que o ano ser� sempre maior ou igual a
2000.*/

#include <stdio.h>

void main(){
	int ano, mes, anoPena, mesPena;
	printf("Calculando a pena!\n");
	printf("Digite o ano: ");
	scanf("%d", &ano);
	printf("Digite o mes: ");
	scanf("%d", &mes);
	printf("Digite a quantidade de anos da pena: ");
	scanf("%d", &anoPena);
	printf("Digite a quantidade de meses que sobraram: ");
	scanf("%d", &mesPena);
	int anoPMes = anoPena * 12;
	int totalDeMeses = anoPMes + mesPena + mes;
	int totalEmAnos = totalDeMeses / 12;
	int anoFinal = totalEmAnos + ano;
	int mesFinal = totalDeMeses % 12;
	printf("Sua pena acaba em %d/%d.", mesFinal, anoFinal);
}
