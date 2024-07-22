#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int num=0, i=0, div=0;
	


		while(i < 5) {
       		 scanf("%d", &num);
       		 div = num / 2;
       
	   	 	if (div % 2 == 0) {
         	   printf("par %d \n", div);
       	 	}
       		 i++;
   		 }

	return 0;
	
}