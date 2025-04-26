/*
 ============================================================================
 Name        : wwwwwwwwww.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number,number1,result;
		setbuf(stdout,NULL);
		printf("enter");
		scanf("%d%d",&number,&number1);
		result=number+number1;
		printf("%d+%d=%d",number,number1,result);
 /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
