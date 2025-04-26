/*
 ============================================================================
 Name        : yyyyyyyyyyyyyy.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,choice,result;
		setbuf(stdout,NULL);
		printf("enter two numbers");
		scanf("%d%d",&num1,&num2);
		printf("1 for addition \n2 for subtraction\n3 for multiplication\4 for division \n enter your choice");
		scanf("%d",&choice);
		if(choice==1){
			result=num1+num2;
			printf("result %d",result);

		}else if(choice==2){
			result=num1-num2;
			printf("result %d",result);
		}else if(choice==3){
			result=num1*num2;
			printf("result %d",result);
		}else if(choice==4){
			result=num1/num2;
			printf("result %d",result);
		}else{
			printf("please read the choice");
		}


	return EXIT_SUCCESS;
}
