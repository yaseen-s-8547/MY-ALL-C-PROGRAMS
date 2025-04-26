/*
 ============================================================================
 Name        : MultiDimensional.c
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
int a[100][100],i,j,limit,coloumnlimit,sum=0;;
printf("enter  limit");
scanf("%d",&limit);
printf("enter coloumn limit");
scanf("%d",&coloumnlimit);

printf("enter elements of the array");
for(i=0;i<limit;i++){
	for(j=0;j<coloumnlimit;j++){
		scanf("%d",&a[i][j]);
	}
}
for(i=0;i<limit;i++){
	for(j=0;j<coloumnlimit;j++){
		printf("%d\t",a[i][j]);
		sum=sum+a[i][j];
	}printf("\n");
}
printf("sum is :%d",sum);
	return EXIT_SUCCESS;
}
