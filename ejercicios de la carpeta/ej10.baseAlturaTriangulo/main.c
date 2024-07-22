#include <stdio.h>
#include <stdlib.h>

/* ej 10) ingresar la base y la altura de un triangulo, calcular su superficie e imprimirla */

int main(int argc, char *argv[])
 {
 	
 	//declaramos variable
 	double base=0, altura=0, superf=0;
 	
 	//pedimos que ingrese datos
 	printf("ingrese la base del triangulo:\n");
 	scanf("%lf",&base);
 	printf("ingrese la base del triangulo:\n");
 	scanf("%lf",&altura);
 	
 	//calculamos superficie
 	superf= (base*altura)/2;
 	
 	printf("la superficie del triangulos es %lf",superf);


 	
	return 0;
}