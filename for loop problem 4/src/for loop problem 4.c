/*
 ============================================================================
 Name        : for.c
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
	int no,flag=0,i;
	printf("enter a number");
	scanf("%d",&no);
	for(i=2;i*i<=no/2;i++){
		if(i%2==0){
			flag=1;
			break;
		}

	}if(flag==0){
		printf("prime number");

	}else{
		printf("not a prime number");
	}



	return EXIT_SUCCESS;
}
