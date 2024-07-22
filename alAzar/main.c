#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
		int numero=0, suma=0,  cantidad=0;
		double prom=0;
	srand(getpid());
	printf("cuantos numeros al azar queres generar\n");
	scanf("%d",&cantidad);
	
	for(int i=0; i<cantidad; i++){
	
		numero = rand() % 11; //siempre es un numero mas del rango ejemplo entre 0 y 10
	
		printf("%d\n",numero);
		suma=suma+numero;
	}
	prom= suma/cantidad;
	printf("la suma es: %d\n",suma);
	printf("el promedio es: %lf",prom);
	return 0;
}