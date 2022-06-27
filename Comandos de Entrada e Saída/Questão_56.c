/*A Cifra de César é um método de criptografia em que cada letra da mensagem original
é substituída por outra e a distância entre cada letra original e a sua substituta na
mensagem enviada é sempre a mesma. Por exemplo, se a letra a da mensagem é
substituída pela letra f na mensagem enviada, então a letra b será substituída pelo g, o
c pelo h, o d pelo i e assim sucessivamente, até que a letra y será substituída pelo d e o
z pela letra e. Com base nestas informações, escreva um programa que leia um
caractere representando uma das letras da mensagem original, outro caractere
representando a letra que vai substituí-lo na nova mensagem, e um terceiro caractere
representando outra letra da mensagem original e determine a letra que vai substituíla na nova mensagem.*/

#include <stdio.h>
#include <string.h>

void main(){
	char alfabeto[50] = "abcdefghijklmnopqrstuvwxyz";
	char caractereDescripto, caractereCorrespondente, caracterePCripto;
	
	printf("Digite um caractere descriptografado: ");
	scanf("%c", &caractereDescripto);
	fflush(stdin);
	
	printf("Digite o caractere de correspondencia: ");
	scanf("%c", &caractereCorrespondente);
	fflush(stdin);
	
	printf("Digite o caractere que deseja criptografar: ");
	scanf("%c", &caracterePCripto);
	fflush(stdin);
	
	int valorCaractereDescripto = ((int)caractereDescripto) - 97;
	int valorCaractereCorrespondencia = ((int)caractereCorrespondente) - 97;
	int correspondencia = valorCaractereCorrespondencia - valorCaractereDescripto;
	int valorCaracterePCripto = ((((int)caracterePCripto + correspondencia) - 97) % 26);
	
	printf("CARACTERE DIGITADO: %c\n", caracterePCripto);
	printf("CARACTERE CRIPTOGRAFADO: %c", alfabeto[valorCaracterePCripto]);
}
