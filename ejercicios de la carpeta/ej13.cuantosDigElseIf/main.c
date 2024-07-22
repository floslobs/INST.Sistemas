#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	
	
	int num=0;
	
	printf("ingrese un numero:\n");
	scanf("%d",&num);
	

	
	if(num==0){
		
		printf("el numero es 0");
		
	}
	else if(num>0 && num<2){
		
			printf("el numero es 1");
		
		}
	else if(num>1 && num<3){
		
			printf("el numero es 2");
		
		}
	else if(num>2 && num<4){
		
			printf("el numero es 3");
		
		}
		else{
			printf("el numero no esta comprendido dentro del rango");
		}
		
		
		

	
	
	
	return 0;
}