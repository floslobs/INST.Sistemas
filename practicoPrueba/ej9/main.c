#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
 	int num=0, mayor=0;
 	
 	for(int i=0; i<3; i++){
 		
 		scanf("%d",&num);
 		
 		if(i==1 || num>mayor){
 			mayor=num;
 			
 			
		 }
		 
		
	 }
	  if(mayor>=300 && mayor<=1000){
	 		printf("mayor %d ",mayor);
			}
	 

	return 0;
}