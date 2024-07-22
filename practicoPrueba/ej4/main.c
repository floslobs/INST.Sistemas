#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
		int num=0, resto=0, i=0;
		printf("ingrese numeros mayores a 10\n");
		
	while(i<4){
		
		scanf("%d",&num);
		
		resto= num % 3;
		
		printf("%d\n",resto);
		
		i++;
	}
	return 0;
}