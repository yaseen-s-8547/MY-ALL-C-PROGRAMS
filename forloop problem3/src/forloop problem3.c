/*
 ============================================================================
 Name        : forloop.c
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
	int limit,i,sum=0;
	printf("enter an limit");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){
		if(i%2!=0){
			sum=sum+i;

		}
	}printf("%d\n",sum);
	return EXIT_SUCCESS;
}
