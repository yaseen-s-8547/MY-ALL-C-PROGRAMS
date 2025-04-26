/*
 ============================================================================
 Name        : 5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void getarray(int arr[100],int sizee);
void displayarray(int arra[100],int sizea);
int main(void) {
int size,array[100];
setbuf(stdout,NULL);
printf("enter the size");
scanf("%d",&size);
getarray(array[100],size);
displayarray(array[100],size);
	return EXIT_SUCCESS;
}void getarray(int arr[100],int sizeee){
	int i;
	printf("enter the values");
	for(i=0;i<sizeee;i++){
		scanf("%d",&arr[i]);
	}
}
void displayarray(int arra[100],int sizea){
	int i;
	for(i=0;i<sizea;i++){
		printf("%d",arra[i]);
	}

}
