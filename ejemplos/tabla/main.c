#include <stdio.h>
#include <stdlib.h>

/* tablas de multiplicar */

int main(int argc, char *argv[]) 
{
	
	for(int i=0; i<=10; i++){
		printf("\n");
		for(int j=1; j<=10; j++){
		
			printf(" %d * %d = %d \n", i,j,i*j);
		
		}
		
	}
	return 0;
}