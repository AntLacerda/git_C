#include <stdio.h>
 
int main() {
  int numA, numB, numC;
  int pesoA, pesoB, pesoC;
 
  printf("Digite o 1º numero: ");
  scanf("%d", &numA);
  printf("Digite o peso do 1º numero: ");
  scanf("%d", &pesoA);
  printf("Digite o 2º numero: ");
  scanf("%d", &numB);
  printf("Digite o peso do 2º numero: ");
  scanf("%d", &pesoB);
  printf("Digite o 3º numero: ");
  scanf("%d", &numC);
  printf("Digite o peso do 3º numero: ");
  scanf("%d", &pesoC);
 
  float soma = (numA * pesoA) + (numB * pesoB) + (numC * pesoC);
  float soma_dos_pesos = pesoA + pesoB + pesoC;
  float media = soma / soma_dos_pesos;
 
  printf("A media ponderada eh: %.1f\n", media);
 
  return 0;
}
