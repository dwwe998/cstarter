#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int temp;
printf("what is tempreature \n");
scanf("%d", &temp);


	if(temp>=0 && temp<=30){
		
		printf("weather is good");
		
	}
	
	
	else{
		
		printf("weather is bad");
		
		
	}
	
	
	return 0;
}