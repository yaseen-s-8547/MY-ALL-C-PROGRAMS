/*
 ============================================================================
 Name        : with.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int multiply(int number2,int number1);
int main(void) {
	int num1,num2,result;
	setbuf(stdout,NULL);
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	result=multiply(num1,num2);
	printf("%d",result);
	return EXIT_SUCCESS;
}
int multiply(int number1,int number2){
	int product=0;
	product=number1*number2;
	return(product);
}
