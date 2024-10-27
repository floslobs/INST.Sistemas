#include <stdio.h>
#include <stdlib.h>

/* 1)Utilizar al menos un ciclo de repeticion inexacto, ingresar 4 numeros , 
sumarlos y obtener el mayor . imprimir los numeros y la suma. si la suma es mayor a 10,
 debera imprimir un cartel que diga es mayor a 10, de lo contrario debera decir no es mayor a 10.   */

int main(int argc, char *argv[]) 
{
	int num=0, i=0;
	int mayor= -9999;
	int suma=0;
	printf("ingresar 4 numeros\n");	
	
	while (i<4){
		
		scanf("%d",&num);
		
		suma= suma + num;
		
		if(num > mayor){
			
			mayor = num;
		}
		
		i++;
	}
	
			
	printf("la suma es: %d\n",suma);
		
	if(suma > 10){
	
		printf("la suma es mayor a 10\n");
	}else{
		printf("la suma es menor a 10\n");
		}
		
	printf("el mayor es: %d",mayor);
	return 0;
}