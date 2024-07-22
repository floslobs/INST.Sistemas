#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int prom=0, num=0,suma=0;
	
	for( int i=0; i<15; i++){
		scanf("%d",&num);
		suma=suma+num;
	}
	prom=suma/15;
	if(prom>50){
		printf("el promedio es mayor a 50");
	}else{
		printf("el promedio es menor a 50");

	}
	return 0;
}