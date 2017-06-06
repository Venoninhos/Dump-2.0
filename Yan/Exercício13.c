#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"portuguese");
	int num,count,a,b,result;
	for (count = 0; count <= 10; count++){
		printf("Insira o número: ");
		fflush(stdin);
		scanf("%i",&num);
		result = 0;
		for (b = 1; b < num; b++){
			a = 0;
			if (num % b == 0){
				a += b;
				result += a;
			}
		}
		if (result == num){
			printf("O número %i é perfeito.\n",num);
		}
	}
}
