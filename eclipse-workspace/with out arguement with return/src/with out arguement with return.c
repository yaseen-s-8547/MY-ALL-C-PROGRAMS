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
int multiply();
int main(void) {
int product;
setbuf(stdout,NULL);
product=multiply();
printf("%d",product);
	return EXIT_SUCCESS;
}

int multiply(){
	int num1,num2,result;
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	result=num1*num2;
	return(result);
}
