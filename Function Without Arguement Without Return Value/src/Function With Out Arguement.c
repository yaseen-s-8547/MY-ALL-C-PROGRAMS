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

void sum();
void sum(){
	int num1,num2,sum;
	printf("enter two number");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("sum of the given two number is : %d",sum);
}
int main(void) {
	setbuf(stdout,NULL);
	sum();

	return EXIT_SUCCESS;
}

