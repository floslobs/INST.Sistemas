#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void sumarArray(int pArray[], int pCant){
	int suma=0;
	for(int i=0; i<pCant; i++){
		
		suma=suma+pArray[i];
	}
	printf("la suma es %d",suma);
}

int main(int argc, char *argv[]) 
{
	int array[]={1,4,2,7};
	sumarArray(array,4);
	
	return 0;
}