#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
		//declaracion de variables
	 int opc = 0, intento = 0, terminar = 0, lugar = 0, parte = 0;

    printf("Bienvenido, esta por comenzar el juego de la busqueda del tesoro en el instituto.\n\n");
    printf("El juego consiste en buscar el tesoro en todo el interior del instituto.\n\n");
    printf("El tesoro es: una materia a tu eleccion para promocionar.\n\n");
    printf("El juego comienza. BUENA SUERTE!!!\n\n");
    printf("Para comenzar elija una opcion\n\n");
    printf("----------     --------\n");
    printf("1) COMENZAR    2) SALIR\n");
    printf("----------     --------\n");
    scanf("%d", &opc);

    if (opc == 1) {
        for(int i=0; i<=3; i++) {
        	if(parte==3){
        		break;
			}
            printf("Elige un lugar donde buscar:\n");
            printf(" 1- salon 1\n");
            printf(" 2- salon 2\n");
            printf(" 3- salon 3\n");
            printf(" 4- salon 4\n");
            printf(" 5- salon 5\n");
            printf(" 6- salon 6\n");
            printf(" 7- salon 7\n");
            printf(" 8- salon 8\n");
            printf(" 9- salon 9\n");
            printf("10- salon 10\n");
            printf("11- salon 11\n");
            printf("15- salir\n");
            scanf("%d", &lugar);


            for(int j=0; j<=4; j++) {
                printf("En que parte del salon deseas buscar?\n");
                printf("1) Debajo de las sillas\n");
                printf("2) Detras del pizarron\n");
                printf("3) Debajo del borrador\n");
                printf("4) Debajo de las mesas\n");
                scanf("%d", &parte);
				
				if(lugar==8 && parte ==3){
				
                printf("ENCOTRO EL TESORO");
                break;
                }else{
                	printf("SIGUE PARTICIPANDO TE QUEDAN %d");
				}
               
            }
            
		}
		 
	}
	return 0;
}