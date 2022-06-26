/*Ana chegou a um consultório médico para uma consulta de rotina. Neste consultório,
o médico atende os seus pacientes de acordo com a ordem em que eles chegaram
(cada paciente recebe uma senha com o número da sua ordem de chegada) e cada
consulta demora exatamente 25 minutos. Com base nestas informações, escreva um
programa que leia um número inteiro correspondendo à hora e outro correspondendo
aos minutos em que Ana chegou ao consultório e o número da senha que ela recebeu
e determine a hora em que ela será atendida. Para isso, considere que ela chegou ao
consultório no exato momento em que o médico ia atender o paciente que recebeu a
senha 1.*/

#include <stdio.h>
const int tempoDeEspera = 25;
void main(){
	int horas, minutos, senha;
	printf("Calculando a hora de atendimento!\n");
	printf("Digite a hora: ");
	scanf("%d", &horas);
	printf("Digite os minutos: ");
	scanf("%d", &minutos);
	printf("Digite a senha recebida: ");
	scanf("%d", &senha);
	int horasPMinutos = horas * 60;
	int somaMinutos = horasPMinutos + minutos + ((senha - 1) * tempoDeEspera);
	int totalHoras = somaMinutos / 60;
	int totalMinutos = somaMinutos % 60;
	printf("Voce sera atendido as %d horas e %d minutos.", totalHoras, totalMinutos);
}
