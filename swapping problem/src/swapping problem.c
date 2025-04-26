/*
 ============================================================================
 Name        : swapping.c
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
	int num1,num2,num3,num4,num5,temp1,temp2,temp3,temp4;
	printf("enter five numbers");
	scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
	temp1=num1;
	temp2=num2;
	temp3=num3;
	temp4=num4;
	num1=temp3;
	num2=temp1;
	num3=num5;
	num4=temp2;
	num5=temp4;
	printf("swapped version:%d %d %d %d %d",num1,num2,num3,num4,num5);/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
