/*Escreva um programa que leia os valores das coordenadas X e Y e dois pontos P e Q e
determine a dist�ncia entre estes dois pontos. A dist�ncia entre dois pontos pode ser
determinada atrav�s da dist�ncia euclidiana.*/

#include <stdio.h>
#include <stdio.h>

void main(){
	float cordX, cordY, pontoP, pontoQ;
	printf("Calculando a distancia euclidiana!\n");
	printf("Digite as coordenadas X e Y: ");
	scanf("%f%f", &cordX, &cordY);
	printf("Agora digite os pontos P e Q: ");
	scanf("%f%f", &pontoP, &pontoQ);
	float dis = sqrt(pow((pontoP - cordX), 2) + pow((pontoQ - cordY), 2));
	printf("A distancia entre dois pontos eh %.2f.", dis);
}
