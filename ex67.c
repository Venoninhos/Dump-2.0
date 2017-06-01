#include <stdio.h>
#include <locale.h>
#include <string.h>
main(){
	int x;
	char aluno[5][11];
	float media[5];
	setlocale(LC_ALL,"portuguese");
	printf("Programa pra armazenar as notas dos fdp\n");
	for (x = 0; x < 5; x++){
		printf("Insira o nome do fdp número %i: ",x+1);
		scanf("%s",&aluno[x]);
		printf("Insira a média deste arrombado: ");
		scanf("%f",&media[x]);
	}
	for (x = 0; x < 5; x++){
	printf("Nome[%i]: %s - %.2f\n",x+1, aluno[x],media[x]);
	}
}
