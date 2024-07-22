#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char palabra[100];
	
	scanf("%[^\n]",&palabra);
	printf("La palabra vieja es: %s\n",palabra);
	
	strcpy(palabra,"pedro");
	
	if(strcmp(palabra,"pedro")==0){
		
		printf("La palabra nueva es:%s",palabra);
	}




	return 0;
}