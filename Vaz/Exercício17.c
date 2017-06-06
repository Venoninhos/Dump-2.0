//Exercício 17
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
main () 
{   
   	setlocale (LC_ALL, "portuguese");
   	char sexo, cO, cC;
   	int idade, cont, qtdM, idademaior, idademenor;
   	float qtdM2, p;
   	qtdM = 0;
   	idade = 0;
   	idademaior = 0;
   	idademenor = 120;
   	for (cont = 0; cont < 35; cont++) 
   	{
       	do 
	   	{
        	printf ("\nDigite o gênero da pessoa (M/F): ");
         	fflush (stdin);
         	scanf ("%c", &sexo);
	  	} while ((sexo != 'm') && (sexo != 'f') && (sexo != 'M') && (sexo != 'F'));
	  	do 
	  	{
	    	printf ("\nA cor dos olhos (V para Verde / A para Azul / C para Castanhos): ");
	    	fflush (stdin);
	     	scanf ("%c", &cO);
	  	} while ((cO != 'v') && (cO != 'a') && (cO != 'c') && (cO != 'V') && (cO != 'A') && (cO != 'C'));  
      	do 
	  	{
	    	 printf ("\nA cor dos cabelos (L para Louro / C para Castanho / P para Preto): ");
	     	fflush (stdin);
	     	scanf ("%c", &cC);
	  	} while ((cC != 'l') && (cC != 'c') && (cC != 'p') && (cC != 'L') && (cC != 'C') && (cC != 'P'));
	  	do 
	  	{
	    	 printf ("\nQual é a idade da pessoa: ");
	     	scanf ("%d", &idade);
	  	} while ((idade < 0) || (idade > 120));
	  	if (((sexo == 'f') || (sexo == 'F')) && ((cO == 'v') || (cO == 'V')) && ((cC == 'l') || (cC == 'L')) && ((idade >= 18) && (idade <= 35)))
      	{
			qtdM++;
      	}
		if (idade < idademenor)
   		{
   	   		idademenor = idade;
	    }
	    if (idade > idademaior)
	    {
	  	 	idademaior = idade;
		}    
   	} 
   	qtdM2 = qtdM;
   	p = (qtdM2*100 )/35;
   	printf ("\nA maior idade presente na pesquisa é de: %d anos e a menor é de: %d anos",idademaior,idademenor);
   	printf ("\nO total de mulheres com olhos verdes, cabelos loiros e entre 18 a 35 anos é: %d \n",qtdM);
   	printf ("E o porcentagem delas em relação ao total é de: %3.2f porcento",p);
}
