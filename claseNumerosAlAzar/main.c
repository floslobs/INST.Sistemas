#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int numero=0;
	srand(getpid());
	
	for(int i=1; i<10; i++){
	
		numero = rand() % 11; //siempre es un numero mas del rango ejemplo entre 0 y 10
	
		printf("%d\n",numero);
	}
	return 0;
}