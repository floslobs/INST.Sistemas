#include <stdio.h>
#include <stdlib.h>

//ej 13) ingresar un numero entre 1 y 1000 y contar cuantos digitos tiene

int main(int argc, char *argv[]) 
{
	//declaro variables
	
	int num=0;
	
	printf("ingrese un numero:\n");
	scanf("%d",&num);
	

	
	if(num>=0 && num<10){
		
		printf("tiene un digito");
		
	}
	else{
		if(num>=10 && num<100){
		
			printf("tiene dos digitos");
		
		}
		if(num>=100 && num<1000){
		
			printf("tiene tres digitos");
		
	
		}
		if(num>=1000 && num<1001){
		
			printf("tiene cuatro digitos");
		
		}
		
		
		

	}
	
	return 0;
}