/*
 ============================================================================
 Name        : 3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size,array1[100][100],i,j,array2[100][100];
		setbuf(stdout,NULL);
	printf("enter the size of the array");
	scanf("%d",&size);
	printf("enter the values of the array 1");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&array1[i][j]);
		}
	}printf("enter the values of array2");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&array2[i][j]);
		}

	}printf("sum of two array is :      ");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			printf("%d\t",array1[i][j]+array2[i][j]);
		}
		printf("\n");}

	return EXIT_SUCCESS;
}
