/*
 ============================================================================
 Name        : 66666666666666.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number,i;
		setbuf(stdout,NULL);
		printf("enter a number");
		scanf("%d",&number);
	    printf("multiplication table of %d:\n",number);
	    for(i=1;i<=10;i++){
	    	printf("%d*%d=%d\n",i,number,i*number);
	    }

	return EXIT_SUCCESS;
}
