#include <stdio.h>
#include <locale.h>
#include <math.h>
main (){
	setlocale(LC_ALL,"portuguese");
	int x=2,v=0, num=0, primo;
    v = 0;
	for (num = 100; num <= 1000; num++){
		v = 1;
		for (x = 2; x < num; x++) {
		if (num % x == 0){
			v = 0;
			}
		}
		if (v == 1) {
		printf("é primo: %d\n", num);	
		}
	}
	
}
