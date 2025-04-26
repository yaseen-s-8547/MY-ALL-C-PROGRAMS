/*
 ============================================================================
 Name        : multi.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array[3][3],i,j;
	setbuf(stdout,NULL);
	printf("enter values");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&array[i][j]);

		}
	}printf("value you entered");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",array[i][j]);
		}printf("\n");
	}





	return EXIT_SUCCESS;
}
