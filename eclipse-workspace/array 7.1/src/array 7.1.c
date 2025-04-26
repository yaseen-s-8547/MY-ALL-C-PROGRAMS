/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int limit,array[100],i,j,temp;
	setbuf(stdout,NULL);
	printf("enter a limit");
	scanf("%d",&limit);
	printf("enter values");
	for(i=0;i<limit;i++){
		scanf("%d",&array[i]);
	}for(i=0;i<limit-1;i++){
	 for(j=1;j<limit;j++){
		 if(array[i]>array[j]){
			 temp=array[i];
			 array[i]=array[j];
		     array[j]=temp;
		 }
	 }
	}
	printf("sorted values: ");
	for(i=0;i<limit;i++){
		printf("%d",array[i]);
	}
	return EXIT_SUCCESS;
}
