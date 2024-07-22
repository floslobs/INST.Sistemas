#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	
	/*int num1=0, num=0, resta=0, i=0;
	
		printf("ingrese primer numero\n");
		scanf("%d",&num1);
	
	for(i=1; 10>i; i++){
		printf("ingrese numero\n");
		scanf("%d",&num);
		
		
		num1-=num;
		i++;
	}
	 	printf("resta %d",resta);*/
	 	
	 	 int numero, resta = 0;

    printf("Ingrese 10 numeros:\n");

    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numero);

        // Para el primer número, inicializamos resultado con el valor ingresado.
        // Para los siguientes, simplemente restamos del resultado.
        if (i == 0) {
            resta = numero;
        } else {
            resta -= numero;
        }
    }

    // Mostrar el resultado
    printf("El resultado de restar los 10 numeros es: %d\n", resta);

	return 0;
}