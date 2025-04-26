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
	int num1,num2,num3;
	setbuf(stdout,NULL);
	printf("enter three numbers");
	scanf("%d,%d,%d",&num1,&num2,&num3);
	if(num1>num3){
		printf("%d is greatest",num1);

	}else{
		printf("%d is the greatest",num3);
	}if(num2>num3){
		printf("%d is the graetest",num2);
	}else{
		printf("%d is the greatest",num3);
	}













	return EXIT_SUCCESS;
}
