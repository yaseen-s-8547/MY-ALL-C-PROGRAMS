/*
 ============================================================================
 Name        : control.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int number;
	printf("enter a number");
	scanf("%d",&number);
	if(number>0){
		printf("entered number is positive");
	}else{
		printf("entered number is negative");
	}

	return EXIT_SUCCESS;
}
