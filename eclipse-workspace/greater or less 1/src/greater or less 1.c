/*
 ============================================================================
 Name        : greater.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2;
	setbuf(stdout,NULL);
	printf("enter two numbers");
	scanf("%d%d",&num1,&num2);
	if(num1<num2){
		printf("number two is greater");/* prints !!!Hello World!!! */
	}else{
		printf("number one is greater");

	return EXIT_SUCCESS;
	{
