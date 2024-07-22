#include <stdio.h>
#include <stdlib.h>

/* ejemplo de SWITCH CASE*/

int main(int argc, char *argv[]) 
{
	int nota=0;
	
	printf("ingrese una nota\n");
	scanf("%d",&nota);
	
	switch(nota){
		
		case 1:
			printf("es un 1");
			
			break;
		case 2:
			printf("es un 2");
			
			break;
		case 3:
			printf("es un 3");
			
			break;
		case 4:
			printf("es un 4");
			
			break;
		case 5:
			printf("es un 5");
			
			break;
		case 6:
			printf("es un 6");
			
			break;
		case 7:
			printf("es un 7");
			
			break;	
		case 8:
			printf("es un 8");
			
			break;
		case 9:
			printf("es un 9");
			
			break;
		case 10:
			printf("es un 10");
			
			break;						
		default:
			printf("fuera del rango entre 1 y 10");
			break;
	}
	
	
	return 0;
}