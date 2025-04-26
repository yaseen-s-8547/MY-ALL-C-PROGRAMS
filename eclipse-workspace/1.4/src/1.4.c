/*
 ============================================================================
 Name        : 4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int size();
int main(void) {
	int sizeee;
	setbuf(stdout,NULL);
	sizeee=size();
	printf("%d",sizeee);

	return EXIT_SUCCESS;
}

int size(){
	int limit,k;
	printf("enter a limit");
	scanf("%d",&limit);
	k=limit;
	return(k);

}
