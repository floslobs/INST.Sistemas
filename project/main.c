#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num=0, prom=0, cont=0, suma=0;
		
		for(int i=0; i<5; i++){
			
			scanf("%d",&num);
			
			if(num>=0){
			
				suma=suma+num; 
			
				cont++;	
						
			}else{
					prom=suma/cont;
				printf("el promedio es: %d",prom);
			}
		}
		
		prom=suma/cont;
		printf("el promedio es: %d",prom);
	return 0;
}