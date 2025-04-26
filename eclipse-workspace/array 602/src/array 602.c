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
	int size,array[100],i,j,flag=0;
		setbuf(stdout,NULL);
		printf("enter size of the array");
		scanf("%d",&size);
		printf("enter the values of the array");
		for(i=0;i<size;i++){
			scanf("%d",&array[i]);
		}
		for(i=0;i<size;i++){
			for(j=2;j<size;j++){
				if(array[j]%2==0){
					flag=1;
				}
			}
		}if(flag==1){
			printf("no even numbers: %d",j);

		}
	return EXIT_SUCCESS;
}
