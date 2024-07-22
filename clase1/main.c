#include <stdio.h>
#include <stdlib.h>

// ingresar nombre , edad, altura.
int main(int argc, char *argv[]) 
{
	//estas son variables
	int edad =0;
	char nombre[20]="";
	double altura = 0;
	
	printf("Ingrese su edad:\n");
	scanf("%d",&edad);
	
	printf("Ingrese su nombre:\n");
	scanf("%s",&nombre);
	
	printf("Ingrese su altura:\n");
	scanf("%lf",&altura);
	
	printf("Mi nombre es %s, mi edad es %d, mi altura es %lf",nombre,edad,altura);

	
	
	return 0;
}