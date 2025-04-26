/*
 ============================================================================
 Name        : alphabet.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int row,alpha;
	for(row=0;row<=26;row++){
		for(alpha=1;alpha<=row;alpha++){
			printf("%c",64+row);
		}printf("\n");
	}
	return EXIT_SUCCESS;
}
