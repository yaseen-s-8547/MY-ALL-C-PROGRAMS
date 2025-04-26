/*
 ============================================================================
 Name        : Function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum();
int main(void) {
	setbuf(stdout,NULL);
	int k;
	k=sum();
	printf("%d",k);
	return EXIT_SUCCESS;
}
int sum(){
	int num1,num2,c;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	c=num1+num2;
	return c;
}
