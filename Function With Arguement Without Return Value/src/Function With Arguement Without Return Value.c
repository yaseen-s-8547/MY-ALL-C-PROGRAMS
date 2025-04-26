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
void sum(int,int);
void sum(int num1,int num2){
	int sum;
	sum=num1+num2;
	printf("result is :%d",sum);
}

int main(void) {
	setbuf(stdout,NULL);
	int numA,numB;
	printf("enter two numbers");
	scanf("%d%d",&numA,&numB);
	sum(numA,numB);
	return EXIT_SUCCESS;
}
