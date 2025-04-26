/*
 ============================================================================
 Name        : MultiDimensional.c
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
	int a[2][3],i,j;
	printf("enter a number");
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++){
			for(j=0;j<3;j++){
				printf("%d\t",a[i][j]);
			}printf("\n");
		}
	printf("\n");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d\t",a[j][i]);
		}printf("\n");
	}
	return EXIT_SUCCESS;
}
