#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num=0;
	
	//imprimimos numeros de 1 al 10
	for(int i=0; i<10; i++){
	
		num = num+1; 
		printf("%d\n",num);
		
	}
	 
	return 0;
}