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
	int size,arr1[100],i,arr2[100],temp;
	setbuf(stdout,NULL);
printf("enter size of the array");
scanf("%d",&size);
printf("enter values of array1");
for(i=0;i<size;i++){
	scanf("%d",&arr1[i]);

}printf("enter the values of array2");
for(i=0;i<size;i++){
	scanf("%d",&arr2[i]);
}for(i=0;i<size;i++){
	temp=arr1[i];
	arr1[i]=arr2[i];
	arr2[i]=temp;
}
printf("swapped values of array 1");
for(i=0;i<size;i++){
	printf("%d",arr1[i]);

}
printf("swapped values of array 2:");
 for(i=0;i<size;i++){
	 printf("%d",arr2[i]);
 }

	return EXIT_SUCCESS;
}
