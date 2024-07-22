#include <stdio.h>
#include <stdlib.h>

/* realice un algoritmo que apartir de proporcionarle la velocida de un automovil expresada
	en km x hs nos de la velocidad en metros por segundos */

int main(int argc, char *argv[]) {
	
	//declaramos variables
	double v1=0, div=0, v2=0, a=5, b=18;
	
	//pedimos que ingrese la velocidad en km x hs
	printf("ingrese la velocidad en km x hs\n");
	scanf("%lf",&v1);
	
	//hacemos el calculo correspondiente .velocidad * (5/18)
	div= a/b;
	v2=  v1 * div;
	
	//imrimimos resultado
	printf("La velocidad en metros por segundos es: %lf",v2);
	
	return 0;
}