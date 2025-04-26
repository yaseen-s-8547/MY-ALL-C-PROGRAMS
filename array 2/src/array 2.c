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
	setbuf(stdout,NULL);
	int a[100];
	int limit,i,sum=0;
	printf("enter limit");
	scanf("%d",&limit);
	printf("enter values");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<limit;i++){
		sum=sum+a[i];
	}
	 printf("%d",sum);


	return EXIT_SUCCESS;
}
