/*
 ============================================================================
 Name        : pattern.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int rows=5,i,j;
	for(i=1;i<=rows;i++){
		for(j=5;j>=i;j--){
			printf("*");
		}printf("\n");
	}

	return EXIT_SUCCESS;
}
