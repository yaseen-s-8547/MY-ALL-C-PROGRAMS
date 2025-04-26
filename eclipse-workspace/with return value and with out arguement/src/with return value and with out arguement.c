/*
 ============================================================================
 Name        : with.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sum();
int main(void) {
	setbuf(stdout,NULL);
	int k;
	k=sum();
	printf("%d",k);

	return EXIT_SUCCESS;
}


int sum(){
	int a,b,c;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	c=a+b;
	return(c);
}
