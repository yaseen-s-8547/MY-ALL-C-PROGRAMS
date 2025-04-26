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
	int limit,values[100],i,searchkey,flag=0;
	setbuf(stdout,NULL);
	printf("enter limit");
	scanf("%d",&limit);
	printf("enter values");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);/* prints !!!Hello World!!! */
	}printf("enter a search key");
	scanf("%d",&searchkey);
	for(i=0;i<limit;i++){
		if(searchkey==values[i]){
			flag=1;
			break;


		}
	}if(flag==1){
		printf("mathch founded at position %d",i+1);
	}else{
		printf("match not found");
	}
	return EXIT_SUCCESS;
}
