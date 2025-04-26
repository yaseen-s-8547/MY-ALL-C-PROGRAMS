/*
 ============================================================================
 Name        : assignment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number,i;
	setbuf(stdout,NULL);
	printf("enter a number");
	scanf("%d",&number);
	for(i=1;i<=100;i++){
		printf("%d*%d",number);/* prints !!!Hello World!!! */
	}
	return EXIT_SUCCESS;
}
