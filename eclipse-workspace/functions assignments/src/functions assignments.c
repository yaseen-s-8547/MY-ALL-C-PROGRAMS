/*
 ============================================================================
 Name        : functions.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int getarray();
int main(void) {
int array[10];
setbuf(stdout,NULL);
array[10]=getarray();
	return EXIT_SUCCESS;
}

int getarray(){
	int values[10],i;
	printf("enter the values of the array");
	for(i=0;i<10;i++){
		scanf("%d",&values[i]);

	}printf("%d",values[i]);

	return(values[i]); }
