#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 		int radio=0, sup=0;
 	
 			printf("ingresar el radio de un circulo\n");
 		scanf("%d",&radio);
 		
 		sup= 3.14*(radio*radio);
 	
 		if(sup % 2 == 0){
 			printf("%d",sup);
		 }
	return 0;
}