/*
 ============================================================================
 Name        : 99999999999999.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	setbuf(stdout,NULL);
		printf("1 for KFC \n2 for fried chicken \n3 for burger \n4 for sandwich \n enter your choice");
		scanf("%d",&choice);
		switch (choice){
		case 1:
			printf("you have selected KFC");
			break;
		case 2:
			printf("you have selected fried chicken");
			break;
		case 3:
			printf("you have selected burger");
			break;
		case 4:
			printf("you have selected sandwich");
			break;
		default:
			printf("nooki select cheyy mwonuuuuse");
			/* prints !!!Hello World!!! */
		}
	return EXIT_SUCCESS;
}
