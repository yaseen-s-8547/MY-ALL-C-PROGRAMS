/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void sumandprintarray(int sizea,int arr[]);
int main(void) {
	int size,array[100];
	setbuf(stdout,NULL);
	printf("enter the size of array");
	scanf("%d",&size);
	sumandprintarray(size,array);

	return EXIT_SUCCESS;
}
void sumandprintarray(int sizea,int arr[]){
	int i,sum=0;
	printf("enter the values of the array");
	for(i=0;i<sizea;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}printf("%d",sum);

}
