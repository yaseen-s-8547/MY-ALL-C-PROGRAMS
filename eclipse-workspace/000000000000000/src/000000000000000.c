/*
 ============================================================================
 Name        : 000000000000000.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int size,array[100],i,flag=0;
			setbuf(stdout,NULL);
			printf("enter size of the array");
			scanf("%d",&size);
			printf("enter the values of the array");
			for(i=0;i<size;i++){
				scanf("%d",&array[i]);
			}

			for(i=0;i<size;i++){
				if(array[i]%2==0){
					flag++;
				}
			}printf("number of even numbers in the array: %d",flag++);
	return EXIT_SUCCESS;
}
