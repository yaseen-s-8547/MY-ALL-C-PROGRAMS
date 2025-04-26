/*
 ============================================================================
 Name        : 111111.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number,i,multiply;
				setbuf(stdout,NULL);
				printf("enter a number");
				scanf("%d",&number);
			    for(i=1;i<=10;i++){
			    	multiply=number*i;

			    }printf("%d",multiply);
	return EXIT_SUCCESS;
}
