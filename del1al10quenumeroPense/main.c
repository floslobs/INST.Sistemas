#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
		int intento=0,  intentos=0, numero=0, maxInt=3;
		double prom=0;
	srand(getpid());
	numero = rand() % 11; //siempre es un numero mas del rango ejemplo entre 0 y 10
	
	 while (intentos < maxInt) {
        printf("Intento %d: Ingresa tu numero: \n", intentos + 1);
        scanf("%d", &intento);

        if (intento == numero) {
            printf("Adivinaste el numero!\n");
            break;
        } else if (intento < numero) {
            printf("El numero es mayor que %d.\n", intento);
        } else {
            printf("El numero es menor que %d.\n", intento);
        }

        intentos++;
    }

    if (intentos == maxInt && intento != numero) {
        printf("Alcanzaste el maximo de intentos. El numero era %d.\n", numero);
    }
		
				
			
	
		
	return 0;
}