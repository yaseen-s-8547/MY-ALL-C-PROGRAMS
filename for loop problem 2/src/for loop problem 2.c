/*
 ============================================================================
 Name        : for.c
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
	int sum=0;
	int no,i;
	printf("enter a number");
	scanf("%d",&no);
	for(i=0;i<=no;i++){
		sum=sum+i;

	}printf("%d",sum);
	return EXIT_SUCCESS;
}
