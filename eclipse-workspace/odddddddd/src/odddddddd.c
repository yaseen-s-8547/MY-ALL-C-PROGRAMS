/*
 ============================================================================
 Name        : odddddddd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,i,sum=0;
	setbuf(stdout,NULL);
	printf("enter a limit");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){
		if(i%2!=0){
			sum=sum+i;
		}
	}printf("%d",sum); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
