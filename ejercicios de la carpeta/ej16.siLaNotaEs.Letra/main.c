#include <stdio.h>
#include <stdlib.h>

/* desarrolle un algoritmo que al ingresar una nota numerica entera entre 1 y 10,
 	la convierta en letras dee la siguiente forma . a=10 , b=8o9, c=7, d=menos7*/

int main(int argc, char *argv[]) 
{
	//declaro variables
	int nota=0;
	
	//se pide que ingrese una nota por teclado
	printf("Ingrese nota de 1-10\n");
	scanf("%d",&nota);
	
	//si la nota es mayor a 0 y menor o igual a 10
	if(nota>0 && nota<=10){
		if(nota==10){
			printf("La nota es A");
			
		}
		else if(nota==8 || nota==9){
			printf("La nota es B");
			
		}
		else if(nota==7){
			printf("La nota es C");
			
		}
		else if(nota<7){
			printf("La nota es D");
		}
		         
	}
	else{
		printf("ERROR la nota no es valida");
	}
	
	
	
	
	
	return 0;
}