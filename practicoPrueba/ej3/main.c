#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	int ingresar=0, num=0;
	
	while(ingresar < 4){
		
		scanf("%d",&num);
		
		if(num > 20 && num<40){
			printf("%d\n",num);
		}
		ingresar++;
	}
	return 0;
}