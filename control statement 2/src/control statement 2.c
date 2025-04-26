/*
 ============================================================================
 Name        : control.c
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
	int num1,num2,num3;
	printf("enter three numbers");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2 && num1>num3){
		printf("the greatest number is %d",num1);
	}else if(num2>num3 && num2>num1){
		printf("greatest number is %d",num2);
	}else if(num3>num1 && num3>num2){
		printf("greatest number is %d",num3);
	}else{
		printf("none");
	}
	return EXIT_SUCCESS;
}
