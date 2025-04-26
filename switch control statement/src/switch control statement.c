/*
 ============================================================================
 Name        : switch.c
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
	int choice;
	printf("1.porotta \n 2.pathiri \n 3.dosha \n 4.kuboos");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("porootta");
		break;
	case 2:
		printf("pathiri");
		break;
	case 3:
		printf("dosha");
		break;
	case 4:
		printf("kuboos");
		break;
	default:
		printf("noneeeeee");
		break;
	}
	return EXIT_SUCCESS;
}
