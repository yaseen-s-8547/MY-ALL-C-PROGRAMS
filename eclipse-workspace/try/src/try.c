/*
 ============================================================================
 Name        : try.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number,number1;
	setbuf(stdout,NULL);
	printf("enter");
	scanf("%d%d",&number,&number1);
	printf("%d+%d=%d",number,number1,number+number1);

	return EXIT_SUCCESS;
}
