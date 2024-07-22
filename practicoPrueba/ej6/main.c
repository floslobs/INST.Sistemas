#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num = 0, sum = 0, i = 0;

    printf("Ingrese numeros positivos\n");

    while (sum <= 100 && i < 100) {
        scanf("%d", &num);
        if (num > 0) {
            sum = sum+ num;
            i++;
        } else {
            printf("El numero que ingreso no es valido\n");
        }
    }

    printf("Suma %d\n", sum);
	return 0;
}