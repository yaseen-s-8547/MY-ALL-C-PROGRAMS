/*
 ============================================================================
 Name        : while.c
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
	char letter;
	printf("enter a letter");
	scanf("%c",&letter);
	while(letter){
		printf("%d",letter);
		letter++;
	}
	return EXIT_SUCCESS;
}
