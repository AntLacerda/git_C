/*Escreva um programa que leia um número inteiro N e imprima dos 10 primeiros
elementos da sua tabuada. A saída do programa deve seguir o formato abaixo, que
mostra os 5 primeiros elementos da tabuada do 2.
1 X 2 = 2
2 X 2 = 4
3 X 2 = 6
4 X 2 = 8
5 X 2 = 10
*/

#include <stdio.h>

void main(){
	int num;
	printf("Tabuada\n");
	printf("Digite o numero desejado: ");
	scanf("%d", &num);
	printf("1 x %d = %d\n", num, (num*1));
	printf("2 x %d = %d\n", num, (num*2));
	printf("3 x %d = %d\n", num, (num*3));
	printf("4 x %d = %d\n", num, (num*4));
	printf("5 x %d = %d\n", num, (num*5));
	printf("6 x %d = %d\n", num, (num*6));
	printf("7 x %d = %d\n", num, (num*7));
	printf("8 x %d = %d\n", num, (num*8));
	printf("9 x %d = %d\n", num, (num*9));
	printf("10 x %d = %d\n", num, (num*10));
}
