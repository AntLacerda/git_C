/*A matem�tica prova que n�meros inteiros podem ser representados de maneira
�nica como um produto de pot�ncias de n�meros primos distintos. Este produto �
chamado de decomposi��o em fatores primos do n�mero e os expoentes s�o
chamados de multiplicidade do primo respectivo. Por exemplo, 360 = 2 elevado a 3
x 3 elevando a 2 x5 e 21 = 3X7. Com base nessas informa��es, escreva um programa em pascal que obtenha a
decomposi��o em fatores primos de um n�mero inteiro positivo informado pelo
usu�rio.*/

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
