#include <stdio.h>
#include <stdlib.h>

/* ejemplo do while swhitch */

int main(int argc, char *argv[]) 

{
	
	int respuesta;
	
	do{
		printf("Seleccione una opcion numerica\n");
		printf("\t1.Ejecutar la calculadora\n");
		printf("\t2.Ejecutar bloc de notas\n");
		scanf("%d",&respuesta);
		
		switch(respuesta){
			case 1:
				printf("Abriendo calculadora....");
				system("calc");
				break;
			case 2:
				printf("Abriendo bloc de notas....");
				system("notepad");
				break;	
		}
	}while(respuesta !=1 && respuesta !=2);
	
	
	return 0;
}