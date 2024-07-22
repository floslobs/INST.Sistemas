#include <stdio.h>
#include <stdlib.h>

/*ej 7) ingresar dos numeros que sean positivos , sumar e imprimir resultado*/
int main(int argc, char *argv[]) 
{
	//declaramos varibles
	int n1=0, n2=0, suma=0;
	
	//se pide ingresar dos numeros por teclado
	printf("ingrese dos numeros positivos:\n");
	scanf("%d %d",&n1, &n2);
	
	//se agrega una condicion, que los numeros a sumar no sean negativos
	
	if(n1>0 && n2>0){
		
			suma = n1+n2;
		printf("la suma es %d",suma);
		
	}
	else{
		printf("ERROR ingreso un numero negativo");
		
	}
	
	
	return 0;
}