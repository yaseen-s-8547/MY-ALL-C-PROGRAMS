/*
 ============================================================================
 Name        : paseed.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1;
	setbuf(stdout,NULL);
	printf("enter mark");
	scanf("%d",&num1);
	if(num1<50){
		printf("failed");
	}else{
		printf("paseed");
	}
	return EXIT_SUCCESS;
}
