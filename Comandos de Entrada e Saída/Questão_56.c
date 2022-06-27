/*A Cifra de C�sar � um m�todo de criptografia em que cada letra da mensagem original
� substitu�da por outra e a dist�ncia entre cada letra original e a sua substituta na
mensagem enviada � sempre a mesma. Por exemplo, se a letra a da mensagem �
substitu�da pela letra f na mensagem enviada, ent�o a letra b ser� substitu�da pelo g, o
c pelo h, o d pelo i e assim sucessivamente, at� que a letra y ser� substitu�da pelo d e o
z pela letra e. Com base nestas informa��es, escreva um programa que leia um
caractere representando uma das letras da mensagem original, outro caractere
representando a letra que vai substitu�-lo na nova mensagem, e um terceiro caractere
representando outra letra da mensagem original e determine a letra que vai substitu�la na nova mensagem.*/

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
