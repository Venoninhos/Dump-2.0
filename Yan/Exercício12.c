#include <stdio.h>
#include <locale.h>
main(){
	int cont = 0, soma = 0;
	for (cont = 100; cont <= 200; cont++){
		if (cont % 2 == 0){
			soma += cont;
		}
	}
	printf("%i",soma);
}
