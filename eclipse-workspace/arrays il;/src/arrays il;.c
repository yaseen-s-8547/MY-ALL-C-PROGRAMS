/*
 ============================================================================
 Name        : arrays.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[100];
		int limit,i;
		setbuf(stdout,NULL);
		printf("enter a limit");
		scanf("%d",&limit);
		printf("enter values");
		for(i=0;i<limit;i++){
			scanf("%d",&a[i]);/* prints !!!Hello World!!! */
		}
		printf("entered values are :  ");
		for(i=0;i<limit;i++){
			printf("%d\t",a[i]);
		}/* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
}
