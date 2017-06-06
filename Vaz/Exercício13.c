//Exercício 13
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main() 
{
    setlocale(LC_ALL, "portuguese");
 	int cont, num, a, b, c;
 	for(cont=0; cont <= 10; cont++)
	{
		printf("\nDigite 10 números: ");
		scanf("%d:", &num);
 		c=0;
 		for(b=1; b < num; b++)
		{
 			a=0;
 			if(num % b == 0) { a += b; }
 			c += a;
		}
		if (c == num) 
		{
 			printf("\nO número %d é perfeito.\n", num);
		}
		else 
		{
	 		printf("\nO número %d não é perfeito.\n", num);
		}
	}
}
