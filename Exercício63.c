#include <stdio.h>
#include <locale.h>
#include <string.h>
main (){
	int x = 0,v = 0,cont = 0;
	int w[10];
	setlocale(LC_ALL,"portuguese");
	printf("Variável W de 10 elementos.\n");
	for (x = 0; x <= 9; x++){
		printf("Insira o valor de W[%i]: ",x+1);
		fflush(stdin);
		scanf("%i",&w[x]);
	}
	printf("Escreve o V aí\n");
	scanf("%i",&v);
	for (x = 0; x <= 9; x++){
		if (w[x] == v){
			printf("W é igual à V = %i na posição %i\n",v,x);
			cont++;
		}
	}
	printf("Número de vezes que o W foi igual à V: %i\n",cont);
}
