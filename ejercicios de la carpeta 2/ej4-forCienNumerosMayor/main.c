#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	
 	int i=0, num=0, mayor=0, primerNum=0;
 	
 	
 	for(i=0; 10>i; i++){
 		
 		printf("INGRESE NUEMERO\n");
 		scanf("%d",&num);
 		
 	
 		
 		if(i==1 || num > mayor){
 			
 			mayor = num;
 		
 		
		 }
		 	printf("%d es  mayor \n",mayor);
 			
 			
 		
		 	
		 
		 i = i +1;
	 }
 	
 	
	return 0;
}