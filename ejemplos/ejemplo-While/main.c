#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n=0; 
	
	printf("ingrese un numero que sea mayor a 10\n");
	scanf("%d",&n);
	
	while(n<10)//Mientras sea verdaderose ejecutara infinitamente
	{
		printf("ingrese otro numero por favor\n");
		scanf("%d",&n);
	}
	
		printf("SE INGRESO CORRECTAMENTE EL NUMERO\n");
		
	return 0;
}