/*
 ============================================================================
 Name        : 2D.c
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
    int array[2][3]={{1,2},{1,5,4}};
    printf("%d",array[1][2]);
	return EXIT_SUCCESS;
}
