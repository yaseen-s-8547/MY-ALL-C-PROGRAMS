/*
 ============================================================================
 Name        : sum.c
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
	int number1;
	int number2;
	int sum;
	printf("enter two numbers");
	scanf("%d%d",&number1,&number2);
	sum=number1+number2;
	printf("%d",sum);
	/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
