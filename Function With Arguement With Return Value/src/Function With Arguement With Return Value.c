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
int sum(int,int);
int sum(int a,int b){
	int sums;
	sums=a+b;
	return sums;
}
int main(void) {
	setbuf(stdout,NULL);
	int num1,num2,c;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	c=sum(num1,num2);
	printf("result is %d",c);
	return EXIT_SUCCESS;
}
