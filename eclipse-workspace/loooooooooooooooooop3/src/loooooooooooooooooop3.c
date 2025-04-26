/*
 ============================================================================
 Name        : loooooooooooooooooop3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number,i,sum=2;
	setbuf(stdout,NULL);
	printf("enter a number");
	scanf("%d",&number);
	for(i=0;i<number;i++){
		sum=sum+i;
	}
	printf("result=%d",sum);/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
