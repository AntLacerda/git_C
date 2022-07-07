/*A matemática prova que números inteiros podem ser representados de maneira
única como um produto de potências de números primos distintos. Este produto é
chamado de decomposição em fatores primos do número e os expoentes são
chamados de multiplicidade do primo respectivo. Por exemplo, 360 = 2 elevado a 3
x 3 elevando a 2 x5 e 21 = 3X7. Com base nessas informações, escreva um programa em pascal que obtenha a
decomposição em fatores primos de um número inteiro positivo informado pelo
usuário.*/

#include <stdio.h>

void main(){
	int num, apoio, k=2;
	printf("Divisoes sucessivas!\n");
	printf("Digite um numero inteiro positivo: ");
	scanf("%d", &num);
	apoio = num;
	while(num!=1){
		if(num%k==0){
			num = num / k;
			printf("%d ", k);
			if(num!=1){
				printf("x ");
			}
		}
		else{
			k++;
		}
	}
	printf("= %d", apoio);
}
