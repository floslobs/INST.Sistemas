#include <stdio.h>
#include <stdlib.h>
//#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	//declarar variables
	int jugador1[3];
	int jugador2[3];
	
   /* char basto[5]="basto";
	char espada[6]="espada";
	char oro[3]="oro";
	char copa[4]="copa";
   */	 
	int palo=0, suma=0;
	//srand(time(NULL));
	//int saltear_numeros[] = {8,9};
	
	//para generar un numero random
	srand(getpid());
	
	//for para rellenar 3 cartas
	for(int i=0;i<3;i++)
	{
		//genera una carta del 1 al 12
		jugador1[i]= rand() %12+1;
		
		//omite el 8 y 9
		if (jugador1[i]==9 || jugador1[i]==8)
		{
			//decrementa la vuelta para no darla como perdida
				i--;
		}
		else
		{
			//imprime la carta y hace un rango del 1 al 4 para el palo
			printf("%d", jugador1[i]);
			switch (palo)
			{
				case 1:
					//printf("- %s\n",basto);	
					printf("basto \n");
					break;
				case 2:
					printf("oro \n");
					//printf("- %s\n",oro);	
					break;
				case 3:
					printf("espada \n");
					//printf("- %s\n",espada);	
					break;
				case 4:
					printf("copa \n");
					//printf("- %s\n",copa);	
					break;
			}
		
		}
	
	}
		return 0;
}

	