#include <stdio.h>
#include <stdlib.h>

/* ej.5) Imprimir los multiplos de 3 desde 0 hata 30 */

int main(int argc, char *argv[]) 
{
	int num=1;
	while(num<=30){
		
		if(num % 3 == 0){
			printf("%d\n",num);
		}
		num++;
	}
	return 0;
}