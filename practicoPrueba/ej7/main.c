#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
 int num, multi = 1, contador = 0, terminar = 0; 


    for (int i = 0; i < 5 && terminar == 0; ) {
        printf("Ingrese un numero (ingreso %d de 30): ", i + 1);
        scanf("%d", &num);

        // Verifica si el número ingresado es 0
        if (num == 0) {
            printf("Se ha ingresado un 0. Terminando el programa.\n");
            terminar = 1; // Establece la variable para terminar el bucle
        } else if (num > 0 && num % 2 == 0) {
            // Multiplica el número ingresado si es par positivo
            multi *= num;
            contador++;
            i++; // Incrementa el contador del bucle solo si se procesa un número válido

            // Verifica si la multiplicación supera 1000
            if (multi > 1000) {
                printf("La multiplicacion supera los 1000: %d\n", multi);
                
                terminar = 1; // Establece la variable para terminar el bucle
            }
        } else {
        	
            printf("Numero invalido, ingrese otro\n");
        }
    }

    // Mensaje final
    if (terminar == 0) {
        printf("Se han ingresado %d numeros y la multiplicacion es %d\n", contador, multi);
    }
	return 0;
}