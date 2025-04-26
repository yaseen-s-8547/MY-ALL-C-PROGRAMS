/*
 ============================================================================
 Name        : display.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void displayedmessages();
int main(void) {
	setbuf(stdout,NULL);
	displayedmessages();

	return EXIT_SUCCESS;
}
void displayedmessages(){
	printf("hello my boy");
}
