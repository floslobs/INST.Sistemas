#include <stdio.h>
#include <stdlib.h>

/* ej.2) ingresar 30 numeros , restarle 3 unidades a c/u e imprimirlos si son mayores a 5 */

int main(int argc, char *argv[]) 
{
	int num=0, resta=0, mayor=5;
	srand(getpid());
	for(int i=0; i<30; i++){
	
		num = rand() % 30+1;//numeros generados del 1 al 10
		
		resta= num-3;
		
		if(resta>5){
			
			printf(" %d---%d\n",num, resta);
		}
	//	else{
	//		printf("num menor a 5-- %d\n",num-3);
	//	}
	}	
	
	return 0;
}