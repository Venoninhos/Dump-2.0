#include <stdio.h>
#include <locale.h>
#include <string.h>
int main (){
	setlocale(LC_ALL,"portuguese");
	int count,count2;
	float media[10],soma[10],nota[10][4];
	char nome[10][15],recup[10][15];
	for (count = 0; count < 10; count++){
		printf("Insira o %iº aluno: ",count+1);
		fflush(stdin);
		scanf("%[^\n]%*c",nome[count]);
		for (count2 = 0; count2 < 4; count2++){
			printf("Insira a %iª nota: ",count2+1);
			fflush(stdin);
			scanf("%f",&nota[count][count2]);
			while ((nota[count][count2] > 10) || (nota[count][count2] < 0)){
			printf("Por favor insira uma nota entre 0 e 10.\n\n");
			printf("Insira a %iª nota: ",count2+1);
			fflush(stdin);
			scanf("%f",&nota[count][count2]);
			}
		}
	}
	for (count = 0; count < 10; count++){
		for (count2 = 0; count2 < 4; count2++){
			soma[count] += nota[count][count2];
		}
		media[count] = soma[count] / 4;
		if (media[count] < 6){
			strcpy(recup[count],nome[count]);
			printf("Aluno de recuperação: %s\n",recup[count]);
		}
	}
}
