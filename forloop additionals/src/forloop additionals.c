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
 int checkprime(int num){
	int k;
	if(num<=1)
		return 0;

	for(k=2;k<=num/k;k++){
		if(num%k==0)
		   return 0;
	}


	return 1;
}
int main(void) {
	setbuf(stdout,NULL);
	int limit,i,sum=0;
	printf("enter a limit");
	scanf("%d",&limit);
	for(i=2;i<=limit;i++){


	    if(checkprime(i)){
	    	sum=sum+i;
	    }
	}printf("%d",sum);
	return EXIT_SUCCESS;
}
