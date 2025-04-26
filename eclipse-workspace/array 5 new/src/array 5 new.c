/*
 ============================================================================
 Name        : array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size,array1[100],i,array2[100],temp;
	setbuf(stdout,NULL);
	printf("size of the array");
	scanf("%d",&size);
	printf("enter the values of the array 1");
	for(i=0;i<size;i++){

		scanf("%d",&array1[i]);
	}
	printf("enter the values of array 2");
	for(i=0;i<size;i++){
		scanf("%d",&array2[i]);
	}
	for(i=0;i<size;i++){
		temp=array1[i];
		array1[i]=array2[i];
		array2[i]=array1[i];
	}
	printf("arrays after swapping");
	printf("array 1:");
	for(i=0;i<size;i++){
		printf("%d\t",array1[i]);
	}
	printf("\narray2:");
	for(i=0;i<size;i++){
		printf("%d\t",array2[i]);
	}
	/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
