/*
 ============================================================================
 Name        : hello.c
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
	int a;
	printf("enter a numbers");
	scanf("%d",&a);
	printf("you have entered %d",a);

	return EXIT_SUCCESS;
}
