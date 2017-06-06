#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL,"portuguese");
	int count,num,a=1,b=1,fib;
	printf("Insira até qual número deseja ir: ");
	scanf("%i",&num);
	printf(" %i ",a);
	printf(" %i ",b);
	for (count = 3; count <= num; count++){
		fib = a + b;
		printf(" %i ",fib);
		a = b;
		b = fib;
	}
	printf("\n");
}
