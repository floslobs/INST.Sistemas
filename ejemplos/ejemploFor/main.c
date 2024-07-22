#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	/*int num=0;
	
	//imprimimos numeros de 1 al 10
	for(int i=0; i<10; i++){
	
		num = num+1; 
		printf("%d\n",num);
	}*/
	
	int suma=0, num=0;
	double prom=0;
	
	for(int i=0; i<4; i++){
		
		scanf("%d",&num);
		suma=suma+num;
		
	}
		prom=suma/4;
		printf("la suma es: %d \n",suma);
		printf("el promedio es: %lf",prom);

	return 0;
}